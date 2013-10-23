#ifndef PROTOTYPE_UTIL_CSVROW_H
#define PROTOTYPE_UTIL_CSVROW_H

#include <vector>
#include <string>

namespace prototype {
namespace util {

class CsvRow
{
  public:
    CsvRow(int rows) : fields(rows) {}

    int size() const { return fields.size(); }
    std::string& operator[](int index) {
        return fields.at(index);
    }
    const std::string& operator[](int index) const {
        return fields.at(index);
    }

  private:
    std::vector<std::string> fields;
};

}} // namespace prototype::util

#endif /* PROTOTYPE_UTIL_CSVROW_H */
