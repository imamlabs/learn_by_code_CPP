// Rekursi untuk menghitung faktorial
#include <iostream>
using namespace std;

long long fact(int n) {           // fungsi faktorial
  if (n <= 1) return 1;           // basis rekursi
  return n * fact(n - 1);         // panggil diri sendiri
}

int main() {
  cout << fact(5) << "\n";        // 120
  return 0;
}
