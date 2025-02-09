#include <iostream>
#include <vector>

int main() {
  std::vector<int> vec = {1, 2, 3};

  // Correct way to remove elements while iterating
  for (auto it = vec.begin(); it != vec.end(); ) {
    if (*it % 2 == 0) { 
      it = vec.erase(it); // Use erase function for correct iterator management
    } else {
      ++it;
    }
  }

  for (int x : vec) {
    std::cout << x << " ";
  }
  std::cout << std::endl;
  return 0;
}