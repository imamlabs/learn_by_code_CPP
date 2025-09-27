#include <iostream>
using namespace std;

int main() {
  bool isOpen = true;         // boolean can be true/false
  bool isClosed = !isOpen;    // logical NOT flips value
  cout << isOpen << " " << isClosed << "\n"; // prints 1 0
  return 0;
}
