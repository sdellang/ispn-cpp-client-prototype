#include "asyncdb/put/Timer.h"

#include <boost/date_time.hpp>
#include <boost/thread.hpp>

#include <iostream>

class TestTimer : public asyncdb::put::Timer
{
  public:
    TestTimer(long p) : asyncdb::put::Timer(p) {}

  protected:
    void run() {
       std::cout << "Running at: " << boost::get_system_time() << std::endl;
    }

};

int main(int, char**) {
    TestTimer tt(2000);
    boost::thread t1(tt);
    //boost::thread_joiner j(t1);
    boost::this_thread::sleep(boost::get_system_time()+boost::posix_time::milliseconds(15000));
    t1.interrupt();
    t1.join();
    return 0;
}


