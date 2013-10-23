#ifndef PROTOTYPE_UTIL_RANDOM_H
#define PROTOTYPE_UTIL_RANDOM_H

#include <boost/random.hpp>

#include <ctime>

namespace prototype {
namespace util {

template<typename IntType> class Random
{
  public:
    Random(IntType min, IntType max) : dist(min, max) {
        struct timespec ts;
        clock_gettime(CLOCK_REALTIME, &ts);
        dist(gen, ts.tv_nsec);
    }

    IntType next() {
        return dist(gen);
    }

  private:
    boost::mt19937 gen;
    boost::uniform_int<IntType> dist;
};

}} // namespace prototype::util

#endif /* PROTOTYPE_UTIL_RANDOM_H */
