#ifndef PROTOTYPE_UTIL_READWRITEVALUE_H
#define PROTOTYPE_UTIL_READWRITEVALUE_H

#include <boost/thread.hpp>

namespace prototype {
namespace util {

template<typename T> class ReadWriteValue
{
  public:
    ReadWriteValue(const T& v) : value(v) {}

    T get() const {
        boost::shared_lock<boost::shared_mutex> readLock;
        return value;
    }
    void set(const T& v) {
        boost::unique_lock<boost::shared_mutex> writeLock;
        value = v;
    }

  private:
    boost::shared_mutex lock;
    T value;
};

}} // namespace prototype::util

#endif /* PROTOTYPE_UTIL_READWRITEVALUE_H */
