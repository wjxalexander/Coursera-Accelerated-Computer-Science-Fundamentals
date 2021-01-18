/**
 * C++ puzzle program.  Try to figure out the result before running!
 *
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include <iostream>

using std::cout;
using std::endl;

int main() {
  // int *x;
  // int size = 3;
  // x = new int[size];

  // for (int i = 0; i < size; i++) {
  //   x[i] = i + 3;
  //   // cout << x[i] << endl;
  // }

  // delete x;
  int *i = new int;
  *i = 0;
  int &j = *i;
  j++;
}
