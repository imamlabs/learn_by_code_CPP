// Melempar dan menangkap exception kustom sederhana
#include <iostream>
#include <stdexcept>
using namespace std;

int divide(int a, int b) {
  if (b == 0) throw runtime_error("b tidak boleh 0"); // validasi
  return a / b;                                       // hasil bagi
}

int main() {
  try {
    cout << divide(10, 2) << "\n";    // aman
    cout << divide(10, 0) << "\n";    // memicu exception
  } catch (const exception& e) {
    cout << "Terjadi error: " << e.what() << "\n"; // tangani
  }
  return 0;
}
