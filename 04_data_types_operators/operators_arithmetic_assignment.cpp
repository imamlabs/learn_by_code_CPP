#include <iostream>
using namespace std;

int main() {
  int a = 10;              // start with 10
  a += 5;                  // a = a + 5 -> 15
  int b = 3;
  int mod = a % b;         // remainder of 15 / 3 -> 0
  int divi = a / b;        // integer division -> 5
  int mult = a * b;        // multiplication -> 45
  cout << mod << " " << divi << " " << mult << "\n";
  return 0;
}
