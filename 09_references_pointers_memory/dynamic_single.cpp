// Alokasi dinamis satu nilai
#include <iostream>
using namespace std;

int main() {
  int* x = new int(42);   // alokasi dan inisialisasi dengan 42
  cout << *x << "\n";     // cetak nilai
  delete x;               // bebaskan memori
  return 0;
}
