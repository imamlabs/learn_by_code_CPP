// Menambahkan (append) ke file
#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ofstream out("log.txt", ios::app); // buka untuk append
  out << "Entry\n";                  // tambah baris
  out.close();                       // tutup file
  return 0;
}
