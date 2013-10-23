
#include "prototype/util/Random.h"

#include <iostream>

int main(int argc, char** argv) {

    prototype::util::Random<long> rand(0, 99);
    for(int i=0; i<100; i++) {
        std::cout << rand.next() << std::endl;
    }

    return 0;
}
