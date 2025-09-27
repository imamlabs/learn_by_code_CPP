// Parameter default pada fungsi
#include <iostream>
using namespace std;

int add(int a, int b = 10) { // b default = 10
  return a + b;              // jumlahkan a dan b
}

int main() {
  cout << add(5) << "\n";    // menggunakan default b -> 15
  cout << add(5, 2) << "\n"; // override b -> 7
  return 0;
}
