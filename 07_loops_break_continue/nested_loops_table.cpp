// Nested loop untuk tabel perkalian
#include <iostream>
using namespace std;

int main() {
  for (int i = 1; i <= 3; i++) {     // baris 1..3
    for (int j = 1; j <= 3; j++) {   // kolom 1..3
      cout << (i*j) << " ";          // cetak hasil kali
    }
    cout << "\n";                    // baris baru tiap i
  }
  return 0;
}
