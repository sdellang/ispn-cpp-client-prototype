#ifndef PROTOTYPE_UTIL_CSVROWSITER_H
#define PROTOTYPE_UTIL_CSVROWSITER_H

#include "prototype/util/CsvRow.h"

#include <vector>

namespace prototype {
namespace util {

class CsvReader;

class CsvRowsIter
{
  public:
    CsvRowsIter& operator++();
    CsvRowsIter operator++(int);
    const CsvRow& operator*() const;
    const CsvRow* operator->() const;
    bool operator==(const CsvRowsIter& other);
    bool operator!=(const CsvRowsIter& other);

  private:
    CsvRowsIter(std::vector<CsvRow>::iterator it);
    std::vector<CsvRow>::iterator iter;

  friend class CsvReader;
};

}} // namespace prototype::util

#endif /* PROTOTYPE_UTIL_CSVROWSITER_H */
