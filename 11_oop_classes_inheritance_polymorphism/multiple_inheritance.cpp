// Multiple inheritance
#include <iostream>
using namespace std;

class A { public: void fa(){ cout << "A\n"; } }; // kelas A
class B { public: void fb(){ cout << "B\n"; } }; // kelas B
class C : public A, public B {};                 // C mewarisi A dan B

int main() {
  C obj;     // objek C
  obj.fa();  // dari A
  obj.fb();  // dari B
  return 0;
}
