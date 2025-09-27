// enum class (scoped enum) untuk keamanan nama
#include <iostream>
using namespace std;

enum class Color { Red, Green, Blue }; // nilai dalam ruang lingkup Color

int main() {
  Color c = Color::Green;     // akses dengan ruang lingkup
  if (c == Color::Green) {    // perbandingan aman
    cout << "Green\n";        // cetak "Green"
  }
  return 0;
}
