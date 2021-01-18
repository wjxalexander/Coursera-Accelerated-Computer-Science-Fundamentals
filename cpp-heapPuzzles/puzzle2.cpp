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
  int *x = new int;  // new： 常驻 返回 一个pointer （heap地址）
  int &y = *x;  //& 运算符"取地址运算符"，这意味着，&var 读作"var的地址"。
  // int &y a refrence variable
  y = 4;

  cout << &x << endl;
  // 大
  cout << x << endl;
  // heap 地址
  cout << *x << endl;
  // 4
  cout << &y << endl;
  // 大 =
  cout << y << endl;
  // 4
  // cout << *y << endl; // type wrong

  return 0;
}
