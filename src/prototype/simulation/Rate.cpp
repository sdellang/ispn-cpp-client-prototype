#include "prototype/simulation/Rate.h"
#include "prototype/simulation/RateInterval.h"
#include "prototype/simulation/RateIter.h"

#include <vector>

namespace prototype {
namespace simulation {

Rate& Rate::add(const RateInterval& rate) {
    rateIntervals.push_back(rate);
    return *this;
}

RateIter Rate::begin() {
    return RateIter(rateIntervals.begin());
}

RateIter Rate::end() {
    return RateIter(rateIntervals.end());
}

}} // namespace prototype::simulation
