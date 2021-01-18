/**
 * C++ program using the Cube's one arugment constructor.
 *
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include <iostream>

#include "Cube.h"

int main() {
  uiuc::Cube c;  // !!! custom defined constructor is defined not automatic
                 // defalut constrctor
  std::cout << "Volume: " << c.getVolume() << std::endl;
  return 0;
}