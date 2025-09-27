#include <iostream>
using namespace std;

int main() {
  int num = 5;           // a normal variable
  int* p = &num;         // p holds the address of num
  cout << p << "\n";     // prints address
  cout << *p << "\n";    // dereference -> prints 5
  *p = 42;               // change value through pointer
  cout << num << "\n";   // prints 42
  return 0;
}
