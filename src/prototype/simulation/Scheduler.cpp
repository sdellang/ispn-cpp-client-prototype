#include "prototype/simulation/Scheduler.h"
#include "prototype/simulation/Rate.h"
#include "prototype/simulation/Worker.h"

#include <boost/date_time.hpp>
#include <boost/thread.hpp>

#include <cmath>
#include <vector>
#include <map>

namespace prototype {
namespace simulation {

Scheduler::Scheduler(const std::vector<Worker*>& w, const Rate& r) : rate(r), workers(w) {}

void Scheduler::operator()() {
    prototype::util::ReadWriteValue<boost::posix_time::milliseconds> pause(boost::posix_time::milliseconds(0));
    std::vector<boost::thread*> threads;

    // each rate interval in rate
    bool first = true;
    for(RateIter ri = rate.begin(); ri != rate.end() ; ++ri) {

        // calculate pause
        long p = lround(1000 / (ri->getFrequency() / workers.size()));
        pause.set( boost::posix_time::milliseconds(p) );

        boost::system_time referenceTime = boost::get_system_time();
        boost::posix_time::milliseconds skew(0);
        boost::posix_time::milliseconds delta( lround(p / workers.size()) );

        for(std::vector<Worker*>::iterator it = workers.begin(); it != workers.end(); ++it) {
            (*it)->setPause(&pause);
            if (first) {
                (*it)->setReferenceTime(referenceTime+skew);
                boost::thread* t = new boost::thread(boost::ref(*(*it)));
                threads.push_back(t);
                skew += delta;
            }
        }

        first = false;

        if(ri->getDuration() != UNLIMITED_DURATION) {
            boost::this_thread::sleep(boost::posix_time::milliseconds(ri->getDuration()));
        } else {
            for( std::vector<boost::thread*>::iterator it2 = threads.begin(); it2 != threads.end() ; ++it2) {
                (*it2)->join();
            }
        }
    }
}

}} // namespace prototype::simulation
