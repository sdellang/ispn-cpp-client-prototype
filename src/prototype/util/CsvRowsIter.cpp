#include "prototype/util/CsvRowsIter.h"
#include "prototype/util/CsvRow.h"
#include "prototype/util/CsvReader.h"

#include <vector>

namespace prototype {
namespace util {

CsvRowsIter::CsvRowsIter(std::vector<CsvRow>::iterator it) : iter(it) {}

CsvRowsIter& CsvRowsIter::operator++() {
    ++iter;
    return *this;
}

CsvRowsIter CsvRowsIter::operator++(int) {
    CsvRowsIter result = *this;
    ++iter;
    return result;
}

const CsvRow& CsvRowsIter::operator*() const {
    return *iter;
}

const CsvRow* CsvRowsIter::operator->() const {
    return &(*iter);
}

bool CsvRowsIter::operator==(const CsvRowsIter& other) {
    return iter==other.iter;
}

bool CsvRowsIter::operator!=(const CsvRowsIter& other) {
    return iter!=other.iter;
}

}} // namespace prototype::util
