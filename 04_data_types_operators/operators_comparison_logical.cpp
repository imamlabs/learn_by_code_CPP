#include <iostream>
using namespace std;

int main() {
  int x = 7, y = 10;
  bool less = x < y;             // true since 7 < 10
  bool cond = (x < y) && (y > 0);// logical AND of two conditions
  cout << less << " " << cond << "\n"; // prints 1 1 (true as 1)
  return 0;
}
