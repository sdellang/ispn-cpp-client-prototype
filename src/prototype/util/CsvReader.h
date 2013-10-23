#ifndef PROTOTYPE_UTIL_CSVREADER_H
#define PROTOTYPE_UTIL_CSVREADER_H

#include "prototype/util/CsvRowsIter.h"

#include <vector>
#include <sstream>

namespace prototype {
namespace util {

class CsvReader
{
  public:
    CsvReader(std::istream& in);

    CsvRowsIter begin();
    CsvRowsIter end();

  private:
    std::vector<CsvRow> rows;
};

}} // namespace prototype::util

#endif /* PROTOTYPE_UTIL_CSVREADER_H */
