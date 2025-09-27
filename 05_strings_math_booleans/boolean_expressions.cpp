// Ekspresi boolean
#include <iostream>
using namespace std;

int main() {
  int a = 10;                   // contoh nilai
  int b = 20;                   // contoh nilai
  bool res = (a < b) && (b != 0); // true jika kedua kondisi benar
  cout << res << "\n";          // true -> 1
  return 0;
}
