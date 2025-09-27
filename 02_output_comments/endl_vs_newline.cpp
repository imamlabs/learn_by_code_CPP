// Perbandingan endl dan \n
#include <iostream>
using namespace std;

int main() {
  cout << "Dengan \\n" << "\n";  // \n menambah baris baru (flush tidak dijamin)
  cout << "Dengan endl" << endl; // endl menambah baris baru + memaksa flush buffer
  return 0;
}
