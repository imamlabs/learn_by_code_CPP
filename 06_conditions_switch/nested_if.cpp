// if bersarang untuk rentang nilai
#include <iostream>
using namespace std;

int main() {
  int score = 92;           // nilai contoh
  if (score >= 90) {        // A
    if (score >= 95) {
      cout << "A+ \n";      // rentang A+
    } else {
      cout << "A \n";       // rentang A
    }
  } else {
    cout << "Below A \n";   // selain A
  }
  return 0;
}
