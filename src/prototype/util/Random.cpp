
#include <boost/random.hpp>

#include <iostream>
#include <ctime>

int main(int argc, char** argv) {

    boost::mt19937 gen;
    boost::uniform_int<long> dist1(0, 99);
    boost::uniform_int<long> dist2(0, 99);
    struct timespec ts1;
    clock_gettime(CLOCK_REALTIME, &ts1);
    struct timespec ts2;
    clock_gettime(CLOCK_REALTIME, &ts2);
    dist1(gen, ts1.tv_nsec);
    dist2(gen, ts2.tv_nsec);
    for(int i=0; i<100; i++) {
        std::cout << dist1(gen) << ";" << dist2(gen) << std::endl;
    }

    return 0;
}
