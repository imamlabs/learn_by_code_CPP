// Tukar nilai dua variabel
#include <iostream>
using namespace std;

int main() {
  int a = 3;             // nilai awal a
  int b = 9;             // nilai awal b
  int tmp = a;           // simpan a
  a = b;                 // pindahkan b ke a
  b = tmp;               // kembalikan simpanan ke b
  cout << a << " " << b << "\n"; // cetak 9 3
  return 0;
}
