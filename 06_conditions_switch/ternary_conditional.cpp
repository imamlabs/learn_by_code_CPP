#include <iostream>
using namespace std;

int main() {
  int n = 5;                            // example number
  string type = (n % 2 == 0) ? "even" : "odd"; // ternary expression
  cout << type << "\n";                 // prints "odd"
  return 0;
}
