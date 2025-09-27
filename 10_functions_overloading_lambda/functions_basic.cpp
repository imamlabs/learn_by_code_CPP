#include <iostream>
using namespace std;

// Function that adds two integers
int add(int a, int b) { // a and b are parameters
  return a + b;         // returns the sum
}

int main() {
  cout << add(2, 3) << "\n"; // 2 and 3 are arguments; prints 5
  return 0;
}
