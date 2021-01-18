#include <iostream>
int reference_count = 0;

class Track {
 public:
  Track() { reference_count++; }
  ~Track() { reference_count--; }
};
// void track_stuff() {
//   Track t;
//   Track *p = &t;
//   // ...
//   delete p;
//   return;
// }
// void track_stuff() {
//   Track *t = new Track;
//   // ...
//   t->~Track();
//   return;
// }
void track_stuff() {
  Track t;
  Track *p = new Track;
  std::cout << reference_count << std::endl;

  // ...
  delete p;
  return;
}
int main() {
  track_stuff();
  std::cout << reference_count << std::endl;
  return 0;
}