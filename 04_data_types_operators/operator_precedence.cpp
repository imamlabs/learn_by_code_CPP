// Prioritas operator memengaruhi hasil ekspresi
#include <iostream>
using namespace std;

int main() {
  int x = 2 + 3 * 4;    // * dievaluasi sebelum + -> 2 + 12 = 14
  int y = (2 + 3) * 4;  // tanda kurung memaksa urutan -> 5 * 4 = 20
  cout << x << " " << y << "\n"; // cetak 14 20
  return 0;
}
