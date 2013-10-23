#ifndef PROTOTYPE_UTIL_CSVWRITER_H
#define PROTOTYPE_UTIL_CSVWRITER_H

#include "prototype/util/CsvRow.h"

#include <ostream>

namespace prototype {
namespace util {

class CsvWriter
{
  public:
    CsvWriter(std::ostream& o);
    CsvWriter& addRow(CsvRow& row);

  private:
    std::ostream& out;
};

}} // namespace prototype::util

#endif /* PROTOTYPE_UTIL_CSVWRITER_H */
