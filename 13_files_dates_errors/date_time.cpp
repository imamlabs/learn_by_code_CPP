#include <iostream>
#include <ctime>     // time utilities
using namespace std;

int main() {
  time_t now = time(nullptr);          // current time in seconds since epoch
  char* ts = ctime(&now);              // human-readable string
  cout << "Now: " << ts;               // prints time string (ends with newline)
  return 0;
}
