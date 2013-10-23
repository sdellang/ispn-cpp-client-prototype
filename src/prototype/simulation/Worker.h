#ifndef PROTOTYPE_SIMULATION_WORKER_H
#define PROTOTYPE_SIMULATION_WORKER_H

#include "prototype/util/ReadWriteValue.h"

#include <boost/date_time.hpp>

namespace prototype {
namespace simulation {

class Worker
{
  public:
    void setPause(const prototype::util::ReadWriteValue<boost::posix_time::milliseconds>* p);
    void setReferenceTime(boost::system_time r);

    void operator()();

  protected:
    virtual void run() = 0;

  private:
    boost::system_time referenceTime;
    const prototype::util::ReadWriteValue<boost::posix_time::milliseconds>* pause;
};

}} // namespace prototype::simulation

#endif /* PROTOTYPE_SIMULATION_WORKER_H */
