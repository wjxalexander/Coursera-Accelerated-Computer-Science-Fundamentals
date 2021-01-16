/* Class Pair has already been declared
 * as shown in the following comments:
 *


 * Implement its member functions below.
 */
#include <iostream>
class Pair {
 public:
  int *pa, *pb;
  Pair(int, int);
  Pair(const Pair &);
  ~Pair();
};

/* Here is a main() function you can use
 * to check your implementation of the
 * class Pair member functions.
 */
Pair::Pair(int a, int b) {
  // This should set up pa and pb to point to newly allocated memory locations
  // on the heap.
  pa = new int(a);
  pb = new int(b);
}
Pair::Pair(const Pair &copy) {
  pa = new int(*copy.pa);
  pb = new int(*copy.pb);
}
Pair::~Pair() {
  delete pa;
  delete pb;
  pa = nullptr;
  pb = nullptr;
}
int main() {
  Pair p(15, 16);
  Pair q(p);
  std::cout << p.pa << "  " << p.pb << std::endl;
  std::cout << q.pa << q.pb << std::endl;

  Pair *hp = new Pair(23, 42);
  delete hp;

  std::cout << "If this message is printed,"
            << " at least the program hasn't crashed yet!\n"
            << "But you may want to print other diagnostic messages too."
            << std::endl;
  return 0;
}