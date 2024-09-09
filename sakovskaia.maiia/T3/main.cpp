#include "polygon.hpp"
#include "command.hpp"
#include <fstream>
#include <vector>
#include <string>
#include <iostream>

int main(int argc, char *argv[])
{
  if (argc < 2)
  {
    std::cerr << "Not enough arguments\n";
    return 1;
  }
  std::ifstream input(argv[1]);
  if (!input)
  {
    std::cerr << "Can't open file\n";
    return 1;
  }
  std::vector< sakovskaia::Polygon > polygons;
  sakovskaia::Polygon polygon;
  while (input >> polygon)
  {
    polygons.push_back(polygon);
  }
  std::string command;
  while (std::getline(std::cin, command))
  {
    sakovskaia::getCommand(command, polygons);
  }
  return 0;
}
