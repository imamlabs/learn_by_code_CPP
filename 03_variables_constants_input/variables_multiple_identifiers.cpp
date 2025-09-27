#include <iostream>
using namespace std;

int main() {
  int x = 1, y = 2, z = 3; // declare multiple variables of the same type
  cout << x + y + z << "\n"; // prints 6
  const double PI = 3.14159; // constant cannot be modified
  // PI = 3.14; // error if uncommented: assignment to const
  cout << PI << "\n"; // show constant value
  return 0;
}
