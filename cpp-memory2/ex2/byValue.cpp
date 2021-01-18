/**
 * C++ program sending a Cube by value.
 *
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include "../Cube.h"
// using uiuc::Cube;

bool sendCube(Cube c) {
  // ... logic to send a Cube somewhere ...
  return true;
}

// int main() {
//   // Create a 1,000-valued cube
//   Cube c(10);
//   Cube d(2);
//   // Send the cube to someone
//   sendCube(c);
//   d = c;
//   return 0;
// }
double magic(uiuc::Cube cube) {
  cube.setLength(1);
  return cube.getVolume();
}

int main() {
  uiuc::Cube c(10);
  magic(c);
  return 0;
}
