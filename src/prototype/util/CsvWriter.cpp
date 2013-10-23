#include "prototype/util/CsvWriter.h"
#include "prototype/util/CsvRow.h"

#include <iostream>

namespace prototype {
namespace util {

CsvWriter::CsvWriter(std::ostream& o) : out(o) {}

CsvWriter& CsvWriter::addRow(CsvRow& row) {
    for(int i = 0; i < row.size(); i++) {
        // TODO: parser, escaping
        out << row[i];
        if (i == row.size() - 1) {
            out << std::endl;
        } else {
            out << ",";
        }
    }
    out.flush();
}

}} // namespace prototype::util
