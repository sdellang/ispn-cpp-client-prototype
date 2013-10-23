#include "prototype/simulation/Worker.h"

#include <boost/date_time.hpp>
#include <boost/thread.hpp>

namespace prototype {
namespace simulation {

void Worker::setReferenceTime(boost::system_time t) {
    referenceTime = t;
}

void Worker::setPause(const prototype::util::ReadWriteValue<boost::posix_time::milliseconds>* p) {
    pause = p;
}

void Worker::operator()() {
    boost::this_thread::sleep(referenceTime);
    try {
        while(true) {
            run();
            referenceTime += boost::posix_time::milliseconds(pause->get());
            boost::this_thread::sleep(referenceTime);
        }
    } catch(const boost::thread_interrupted&) {
        // TODO
        return;
    }
}

}} // namespace prototype::simulation
