/**
 * Simple C++ class for representing a Cube (with constructors).
 *
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include "Cube.h"

#include <iostream>

namespace uiuc {
Cube::Cube() {
  length_ = 1;
  std::cout << "default Created $" << getVolume() << std::endl;
};
Cube::Cube(double length) {
  // create a new obj
  length_ = length;
  std::cout << "custom Created $" << getVolume() << std::endl;
}

Cube::Cube(const Cube& obj) {
  // create a new obj
  length_ = obj.length_;
  std::cout << "copy Created $" << getVolume() << " via copy" << std::endl;
}

Cube& Cube::operator=(const Cube& obj) {
  // create a new obj

  std::cout << "Transformed $" << getVolume() << "-> $" << obj.getVolume()
            << std::endl;
  length_ = obj.length_;
  std::cout << "this" << this << std::endl;
  return *this;
}

double Cube::getVolume() const { return length_ * length_ * length_; }

double Cube::getSurfaceArea() const { return 6 * length_ * length_; }

void Cube::setLength(double length) { length_ = length; }
}  // namespace uiuc
