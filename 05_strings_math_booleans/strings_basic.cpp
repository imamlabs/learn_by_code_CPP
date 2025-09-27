#include <iostream>
#include <string>
using namespace std;

int main() {
  string first = "Hello";            // a std::string object
  string second = "World";
  string combined = first + " " + second; // concatenation using +
  cout << combined << "\n";          // prints "Hello World"
  cout << combined.size() << "\n";   // size() returns length
  cout << combined[0] << "\n";       // access first character
  return 0;
}
