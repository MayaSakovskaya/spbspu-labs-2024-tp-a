#ifndef DATA_STRUCT_HPP
#define DATA_STRUCT_HPP

#include <iostream>
#include <limits>

namespace skuratov
{
  struct DataStruct
  {
    unsigned long long key1;
    char key2;
    std::string key3;
    bool operator<(const DataStruct& different) const;
  };

  std::istream& operator>>(std::istream& in, DataStruct& value);
  std::ostream& operator<<(std::ostream& out, const DataStruct& value);
}

#endif
