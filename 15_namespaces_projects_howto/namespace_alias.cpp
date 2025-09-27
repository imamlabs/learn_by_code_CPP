// Alias namespace
#include <iostream>
namespace verylongname { int x = 42; } // namespace panjang
namespace vln = verylongname;          // alias pendek

int main() {
  std::cout << vln::x << "\n";         // akses lewat alias
  return 0;
}
