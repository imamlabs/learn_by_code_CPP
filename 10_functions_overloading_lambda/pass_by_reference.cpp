#include <iostream>
using namespace std;

// swap two integers by reference
void swapRef(int& a, int& b) {
  int temp = a; // save a
  a = b;        // assign b to a
  b = temp;     // put saved a into b
}

int main() {
  int x = 1, y = 2; // initial values
  swapRef(x, y);    // x and y are swapped in place
  cout << x << " " << y << "\n"; // prints 2 1
  return 0;
}
