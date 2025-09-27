// Ilustrasi fallthrough jika tanpa break
#include <iostream>
using namespace std;

int main() {
  int level = 2;     // contoh level
  switch (level) {   // tanpa break -> eksekusi berlanjut
    case 1: cout << "Level 1\n";
    case 2: cout << "Level 2\n"; // level 2 akan mencetak ini...
    case 3: cout << "Level 3\n"; // ...dan ini, karena tidak ada break
    default: cout << "Done\n";   // ...hingga default
  }
  return 0;
}
