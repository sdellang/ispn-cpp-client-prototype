
#include "prototype/util/ReadWriteValue.h"

#include <iostream>

int main(int argc, char** argv) {

    prototype::util::ReadWriteValue<long> value(100);
    value.set(50);
    std::cout << value.get() << std::endl;

    return 0;
}
