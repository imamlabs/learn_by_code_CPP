#include <iostream>
using namespace std;

int main() {
  int day = 3;            // pretend day 3
  switch(day) {           // choose branch by day value
    case 1: cout << "Mon\n"; break;
    case 2: cout << "Tue\n"; break;
    case 3: cout << "Wed\n"; break;  // executed branch
    default: cout << "Other\n";      // fallback
  }
  return 0;
}
