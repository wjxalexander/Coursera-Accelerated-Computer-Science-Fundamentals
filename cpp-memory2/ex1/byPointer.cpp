/**
 * C++ program copying a Cube currency pointer.
 *
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include <iostream>

#include "../Cube.h"

using std::cout;
using std::endl;
using uiuc::Cube;
int main() {
  // Create a 1,000-valued cube
  Cube c(10);

  // Transfer the cube
  Cube* myCube = &c;  // pointer HAS IT'S OWN ADDRESS
  cout << &c << endl;
  cout << &myCube << endl;
  return 0;
}
