#include "asyncdb/put/Timer.h"
#include "asyncdb/put/Scheduler.h"
#include "asyncdb/put/Listener.h"

#include <boost/date_time.hpp>
#include <boost/thread.hpp>

#include <iostream>

class TestTimer : public asyncdb::put::Timer
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
    asyncdb::put::Rate rate;
    rate.addRate(1);
    //rate.addRate(3,10000);
    //rate.addRate(6);
    //rate.addRate(2,15000);
    std::vector<asyncdb::put::Timer*> workers;
    TestTimer* w1 = new TestTimer();
    //TestTimer* w2 = new TestTimer();
    //TestTimer* w3 = new TestTimer();
    workers.push_back(w1);
    //workers.push_back(w2);
    //workers.push_back(w3);
    asyncdb::put::Listener l;
    boost::thread list(l);
    list.detach();
    asyncdb::put::Scheduler sched(rate, workers);
    sched();
    return 0;
}


