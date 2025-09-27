#include <iostream>
#include <cmath>       // math functions like sqrt, pow
using namespace std;

int main() {
  double v = 16.0;             // a floating point value
  cout << sqrt(v) << "\n";     // square root -> 4
  cout << pow(2.0, 8.0) << "\n"; // power 2^8 -> 256
  cout << round(3.6) << "\n";  // rounds to nearest -> 4
  return 0;
}
