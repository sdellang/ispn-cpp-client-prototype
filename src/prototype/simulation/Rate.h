#ifndef PROTOTYPE_SIMULATION_RATE_H
#define PROTOTYPE_SIMULATION_RATE_H

#include "prototype/simulation/RateInterval.h"
#include "prototype/simulation/RateIter.h"

#include <vector>

namespace prototype {
namespace simulation {

class Rate
{
  public:
    Rate& add(const RateInterval& rate);
    RateIter begin();
    RateIter end();

  private:
    std::vector<RateInterval> rateIntervals;
};

}} // namespace prototype::simulation

#endif /* PROTOTYPE_SIMULATION_RATE_H */
