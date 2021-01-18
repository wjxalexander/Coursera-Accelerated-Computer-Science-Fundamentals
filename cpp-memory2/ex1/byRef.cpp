/**
 * C++ program aliasing a Cube class by reference.
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
  Cube& myCube = c;  // same obj
  cout << &c << endl;
  cout << &myCube << endl;
  // same address!

  Cube c2;
  cout << &c2 << endl;

  c2 = c;
  cout << &c << endl;
  cout << &c2 << endl;
  return 0;
}
