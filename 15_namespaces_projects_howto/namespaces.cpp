#include <iostream>
using namespace std;

// Create a custom namespace
namespace mathutil {
  int add(int a, int b) { return a + b; } // a simple function
}

int main() {
  // Access function with scope operator ::
  std::cout << mathutil::add(2,3) << "\n"; // prints 5
  return 0;
}
