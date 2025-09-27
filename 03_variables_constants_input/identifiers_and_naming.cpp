// Aturan penamaan identifier
#include <iostream>
using namespace std;

int main() {
  int jumlahSiswa = 30;      // camelCase untuk variabel
  int _counter = 1;          // underscore awal boleh
  // int 2angka = 2;         // salah: tidak boleh mulai dengan digit
  const int MAX_SCORE = 100; // konstanta biasanya UPPER_CASE
  cout << jumlahSiswa << " " << _counter << " " << MAX_SCORE << "\n";
  return 0;
}
