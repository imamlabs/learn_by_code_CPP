#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i < 10; i++) {
    if (i == 3) continue; // skip the rest of this iteration when i==3
    if (i == 7) break;    // stop the loop entirely when i==7
    cout << i << " ";
  }
  return 0;
}
