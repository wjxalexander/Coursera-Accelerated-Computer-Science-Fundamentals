/**
 * C++ program printing various memory values with references and pointers.
 *
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include <iostream>
using std::cout;
using std::endl;

int main() {
  int num = 7;
  std::cout << " num: " << num << std::endl;
  std::cout << "&num: " << &num << std::endl;

  int* p = &num;
  std::cout << " p: " << p << std::endl;
  std::cout << "&p: " << &p << std::endl;
  std::cout << "*p: " << *p << std::endl;

  *p = 42;
  std::cout << "*p changed to 42" << std::endl;
  std::cout << " num: " << num << std::endl;

  int i = 7;
  int* z = &i;
  *z = 10;
  cout << i << endl;
  cout << z << endl;
  cout << *z << endl;
  cout << &i << endl;
  cout << &z << endl;
  return 0;
}
