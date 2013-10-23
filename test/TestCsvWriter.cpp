#include "prototype/util/CsvWriter.h"
#include "prototype/util/CsvRow.h"

#include <iostream>
#include <sstream>

int main(int argc, char** argv) {

    std::ostringstream ostr;
    prototype::util::CsvWriter writer(ostr);
    prototype::util::CsvRow row1(3);
    row1[0] = "AAA";
    row1[1] = "BBB";
    row1[2] = "CCC";
    writer.addRow(row1);
    prototype::util::CsvRow row2(3);
    row2[0] = "AAA";
    row2[1] = "BBB";
    row2[2] = "CCC";
    writer.addRow(row2);
    std::cout << ostr.str() << std::endl;

    return 0;
}
