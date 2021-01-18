/**
 * C++ program copying a Cube class.
 *
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include <iostream>

#include "../Cube.h"
using std::cout;
using std::endl;
using uiuc::Cube;

void foo(Cube cube) {
  // Nothing :)
  cube.setLength(8);
  cout << "inside foo: " << cube.getVolume() << endl;
}

void bar(Cube& cube) {
  cube.setLength(10);
  cout << "inside bar: " << cube.getVolume() << endl;
}

int main() {
  Cube c;  // Default constructor invoked!
  cout << "first: " << c.getVolume() << endl;

  foo(c);  // Copy constructor invoked!
  cout << "second: " << c.getVolume() << endl;

  bar(c);
  cout << "third: " << c.getVolume() << endl;

  return 0;
}
