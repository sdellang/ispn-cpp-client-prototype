#include "prototype/util/CsvReader.h"
#include "prototype/util/CsvRowsIter.h"

#include <boost/tokenizer.hpp>

#include <sstream>

namespace prototype {
namespace util {

CsvReader::CsvReader(std::istream& in) {
    std::string line;
    while(getline(in, line)) {
        boost::tokenizer<boost::escaped_list_separator<char> > tok(line, boost::escaped_list_separator<char>('\\', ',', '\"'));
        int size = 0;
        for (boost::tokenizer<boost::escaped_list_separator<char> >::iterator it = tok.begin(); it != tok.end(); ++it) {
            size++;
        }
        CsvRow row(size);
        int index = 0;
        for (boost::tokenizer<boost::escaped_list_separator<char> >::iterator it = tok.begin(); it != tok.end(); ++it) {
            row[index++] = *it;
        }
        rows.push_back(row);
    }
}

CsvRowsIter CsvReader::begin() {
    return CsvRowsIter(rows.begin());
}

CsvRowsIter CsvReader::end() {
    return CsvRowsIter(rows.end());
}

}} // namespace prototype::util
