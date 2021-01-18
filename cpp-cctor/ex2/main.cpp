/**
 * C++ program copying a Cube class.
 *
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include "../Cube.h"
using uiuc::Cube;

Cube foo() {
  Cube c;    // Default constructor invoked
  return c;  // Copy constructor invoked!
}

int main() {
  Cube c2 = foo();  // Copy constructor invoked!
  // WARNING!!!
  // Cube c2;
  // c2 = foo();  // NO constructor invoked HERE!
  return 0;
}
