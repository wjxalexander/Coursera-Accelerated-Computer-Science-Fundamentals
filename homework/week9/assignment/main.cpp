#include <algorithm>
#include <functional>
#include <iomanip>
#include <iostream>
#include <vector>

int insert(int value, std::vector<int> &table) {
  int hashPosition = value % 1000;
  int count = 0;
  if (table[hashPosition] == -1) {
    table[hashPosition] = value;
    return count;
  }
  while (table[hashPosition] != -1) {
    count++;
    hashPosition++;
  }
  table[hashPosition] = value;
  return count;
}

int main() {
  // Prepare some random but distinct values
  constexpr int NUM_VALUES = 500;
  std::vector<int> value(NUM_VALUES);
  int prev_value = 0;
  for (int i = 0; i < NUM_VALUES; i++) {
    prev_value += rand() % 25 + 1;
    value[i] = prev_value;
  }

  // Create hash table of size 1000 initialized with -1
  std::vector<int> table(1000, -1);

  // Insert values and track the maximum number of collisions
  int max_hit = 0, max_value = -1;
  for (int i = 0; i < NUM_VALUES; i++) {
    int hit = insert(value[i], table);
    if (hit > max_hit) {
      max_hit = hit;
      max_value = value[i];
    }
  }

  std::cout << "Inserting value " << max_value << " experienced " << max_hit
            << " collisions." << std::endl
            << std::endl;

  // Print the table contents
  for (int j = 0; j < 1000; j += 10) {
    std::cout << std::setw(3) << j << ":";
    for (int i = 0; i < 10; i++) {
      if (table[j + i] == -1)
        std::cout << "      ";
      else
        std::cout << std::setw(6) << table[j + i];
    }
    std::cout << std::endl;
  }

  return 0;
}
