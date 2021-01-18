/**
 * C++ class for a game of the Tower of Hanoi puzzle.
 *
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#pragma once

#include <vector>

#include "Stack.h"

class Game {
 public:
  Game();
  void solve();

  // An overloaded operator<<, allowing us to print the stack via `cout<<`:
  friend std::ostream& operator<<(std::ostream& os, const Game& game);

 private:
  std::vector<Stack> stacks_;
};
