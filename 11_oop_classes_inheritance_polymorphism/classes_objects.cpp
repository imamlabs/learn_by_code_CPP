#include <iostream>
#include <string>
using namespace std;

// Define a simple class
class Person {
public:              // public allows access from outside the class
  string name;       // data member
  void greet() {     // method
    cout << "Hello, " << name << "!\n";
  }
};

int main() {
  Person p;          // create an object
  p.name = "Imam";   // set field
  p.greet();         // call method -> "Hello, Imam!"
  return 0;
}
