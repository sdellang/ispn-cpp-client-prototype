#include "prototype/util/CsvReader.h"
#include "prototype/util/CsvRowsIter.h"
#include "prototype/util/CsvRow.h"

#include <iostream>

int main(int argc, char** argv) {

    std::stringstream str;
    str << "AAA,BBB,CCC" << std::endl;
    str << "DDD,EEE,FFF";
    prototype::util::CsvReader reader(str);
    for(prototype::util::CsvRowsIter it = reader.begin(); it != reader.end(); ++it) {
        prototype::util::CsvRow row = *it;
        std::cout << "Field: " << row[0] << std::endl;
        std::cout << "Field: " << row[1] << std::endl;
        std::cout << "Field: " << row[2] << std::endl;
    }

    return 0;
}
