#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
  void speak() { cout << "Some sound\n"; } // base method
};

class Dog : public Animal {
public:
  void bark() { cout << "Woof!\n"; } // derived-specific method
};

int main() {
  Dog d;         // create derived object
  d.speak();     // inherited method
  d.bark();      // derived method
  return 0;
}
