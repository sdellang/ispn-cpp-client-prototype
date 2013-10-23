#include "prototype/simulation/Rate.h"
#include "prototype/simulation/RateInterval.h"
#include "prototype/simulation/RateIter.h"

#include <iostream>

using namespace prototype::simulation;

int main(int, char**) {
    RateInterval rate1(10,100);
    RateInterval rate2(20,200);
    RateInterval rate3(30,300);
    Rate rate;
    rate.add(rate1).add(rate2).add(rate3);
    for(RateIter iter = rate.begin() ; iter != rate.end(); ++iter) {
        std::cout << "Frequency: " << iter->getFrequency() << ", Duration: " << iter->getDuration() << std::endl;
    }
    for(RateIter iter = rate.begin() ; iter != rate.end(); iter++) {
        std::cout << "Frequency: " << (*iter).getFrequency() << ", Duration: " << (*iter).getDuration() << std::endl;
    }
    return 0;
}


