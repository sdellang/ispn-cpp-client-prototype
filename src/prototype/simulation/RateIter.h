#ifndef PROTOTYPE_SIMULATION_RATEITER_H
#define PROTOTYPE_SIMULATION_RATEITER_H

#include "prototype/simulation/RateInterval.h"

#include <vector>

namespace prototype {
namespace simulation {

class Rate;

class RateIter
{
  public:
    RateIter& operator++();
    RateIter operator++(int);
    const RateInterval& operator*() const;
    const RateInterval* operator->() const;
    bool operator==(const RateIter& other);
    bool operator!=(const RateIter& other);

  private:
    RateIter(std::vector<RateInterval>::iterator it);
    std::vector<RateInterval>::iterator iter;

  friend class Rate;
};

}} // namespace prototype::simulation

#endif /* PROTOTYPE_SIMULATION_RATEITER_H */
