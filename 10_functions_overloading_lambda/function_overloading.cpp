#include <iostream>
using namespace std;

// Two overloads of 'area' with different parameter types
int area(int w, int h) {       // rectangle area with ints
  return w * h;
}
double area(double r) {        // circle area with double radius (π≈3.14159)
  const double PI = 3.14159;
  return PI * r * r;
}

int main() {
  cout << area(3, 4) << "\n";   // calls int version -> 12
  cout << area(2.5) << "\n";    // calls double version -> 19.6349
  return 0;
}
