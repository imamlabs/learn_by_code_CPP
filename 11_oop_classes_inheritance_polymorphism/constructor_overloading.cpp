// Overloading konstruktor
#include <iostream>
#include <string>
using namespace std;

class Box {
public:
  int w, h;                        // dimensi
  Box() : w(0), h(0) {}            // konstruktor tanpa argumen
  Box(int w, int h) : w(w), h(h) {}// konstruktor dengan argumen
};

int main() {
  Box a;                 // panggil ctor default
  Box b(3, 4);           // panggil ctor parametris
  cout << a.w << "x" << a.h << "\n";
  cout << b.w << "x" << b.h << "\n";
  return 0;
}
