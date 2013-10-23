#include "prototype/simulation/Worker.h"

#include <boost/date_time.hpp>
#include <boost/thread.hpp>

#include <iostream>

class TestWorker : public prototype::simulation::Worker
{
  protected:
    void run() {
       std::cout << "Running at: " << boost::get_system_time() << std::endl;
    }

};

int main(int, char**) {
    TestWorker tt;
    tt.setReferenceTime(boost::get_system_time());
    prototype::util::ReadWriteValue<boost::posix_time::milliseconds> pause(boost::posix_time::milliseconds(500));
    tt.setPause(&pause);
    boost::thread t1(tt);
    boost::this_thread::sleep(boost::get_system_time()+boost::posix_time::milliseconds(15000));
    t1.interrupt();
    t1.join();
    return 0;
}


