// Membaca string lengkap (dengan spasi) menggunakan getline
#include <iostream>
#include <string>
using namespace std;

int main() {
  string namaLengkap;                // menampung nama lengkap
  cout << "Masukkan nama lengkap: "; // prompt pengguna
  getline(cin, namaLengkap);         // membaca satu baris penuh
  cout << "Halo, " << namaLengkap << "!\n"; // sapaan balik
  return 0;
}
