#include "prototype/simulation/RateIter.h"
#include "prototype/simulation/RateInterval.h"
#include "prototype/simulation/Rate.h"

#include <vector>

namespace prototype {
namespace simulation {

RateIter::RateIter(std::vector<RateInterval>::iterator it) : iter(it) {}

RateIter& RateIter::operator++() {
    ++iter;
    return *this;
}

RateIter RateIter::operator++(int) {
    RateIter result = *this;
    ++iter;
    return result;
}

const RateInterval& RateIter::operator*() const {
    return *iter;
}

const RateInterval* RateIter::operator->() const {
    return &(*iter);
}

bool RateIter::operator==(const RateIter& other) {
    return iter==other.iter;
}

bool RateIter::operator!=(const RateIter& other) {
    return iter!=other.iter;
}

}} // namespace prototype::simulation
