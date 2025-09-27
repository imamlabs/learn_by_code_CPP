#include <iostream>
using namespace std;

// A function template that returns the maximum of two values
template <typename T>
T myMax(T a, T b) {
  return (a > b) ? a : b; // ternary to choose larger
}

int main() {
  cout << myMax(3, 7) << "\n";       // T deduced as int
  cout << myMax(2.5, 1.2) << "\n";   // T deduced as double
  return 0;
}
