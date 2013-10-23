#include "prototype/simulation/Worker.h"
#include "prototype/simulation/Scheduler.h"
#include "prototype/simulation/Rate.h"
#include "prototype/simulation/RateInterval.h"

#include <boost/date_time.hpp>
#include <boost/thread.hpp>

#include <iostream>

class TestTimer : public prototype::simulation::Worker
{
  protected:
    void run() {
       boost::system_time st = boost::get_system_time();
       boost::lock_guard<boost::mutex> lock(mutex);
       std::cout << "Thread " << boost::this_thread::get_id() << " running at: " << st << std::endl;
    }

  public:
    static boost::mutex mutex;

};

boost::mutex TestTimer::mutex;

int main(int, char**) {
    prototype::simulation::Rate rate;
    prototype::simulation::RateInterval int1(3,10000);
    prototype::simulation::RateInterval int2(6);
    rate.add(int1).add(int2);
    std::vector<prototype::simulation::Worker*> workers;
    TestTimer* w1 = new TestTimer();
    TestTimer* w2 = new TestTimer();
    TestTimer* w3 = new TestTimer();
    workers.push_back(w1);
    workers.push_back(w2);
    workers.push_back(w3);
    prototype::simulation::Scheduler sched(workers, rate);
    sched();

    return 0;
}


