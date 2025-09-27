#include <iostream>
using namespace std;

int main() {
  int i = 0;                        // start value
  while (i < 3) {                   // loop while true
    cout << "while " << i << "\n";  // body
    i++;                            // update
  }
  int j = 0;
  do {                              // do executes at least once
    cout << "do " << j << "\n";
    j++;
  } while (j < 3);
  return 0;
}
