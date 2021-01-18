/**
 * C++ program invoking Cube's assignment operator.
 *
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include <iostream>

#include "Cube.h"
using std::cout;
using std::endl;
using uiuc::Cube;

int main() {
  Cube c;
  Cube myCube;

  myCube = c;
  Cube my_cube_2 = c;  // Copy constructor invoked!
  return 0;
}
