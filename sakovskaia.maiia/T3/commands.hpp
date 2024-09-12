#ifndef COMMANDS_HPP
#define COMMANDS_HPP
#include <vector>
#include <iostream>
#include <functional>
#include <algorithm>
#include <iomanip>
#include <numeric>
#include <map>
#include "polygon.hpp"

namespace sakovskaia
{
  double count(const std::vector< Polygon > & polygons, std::function< bool(const Polygon &) > filter);
  void getArea(const std::string & parameter, const std::vector< Polygon > & polygons);
  void getMaxMin(const std::string & type, const std::vector< Polygon > & polygons);
  size_t findMaxSeq(const Polygon & pattern, std::vector< Polygon >::const_iterator iter, std::vector< Polygon >::const_iterator end, size_t current_max = 0);
  void getMaxSeq(const Polygon & pattern, const std::vector< Polygon > & polygons);
  void getRmecho(const Polygon & pattern, std::vector< Polygon > & polygons);
  bool isRectangle(const Polygon & polygon);
  void getRects(const std::vector< Polygon > & polygons);
  void getCommand(const std::string & command, std::vector< Polygon > & polygons);
}
#endif
