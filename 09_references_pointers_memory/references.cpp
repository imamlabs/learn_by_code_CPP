#include <iostream>
using namespace std;

int main() {
  int value = 10;          // a regular int variable
  int& ref = value;        // ref is an alias to value
  ref = 20;                // modifies 'value' through the reference
  cout << value << "\n";   // prints 20
  cout << &value << "\n";  // prints memory address of value
  return 0;
}
