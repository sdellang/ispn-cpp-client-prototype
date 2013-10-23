#include "prototype/simulation/RateInterval.h"

namespace prototype {
namespace simulation {

RateInterval::RateInterval(int f, long d) {
    frequency = f;
    duration = d;
}

int RateInterval::getFrequency() const {
    return frequency;
}

long RateInterval::getDuration() const {
    return duration;
}

}} // namespace prototype::simulation
