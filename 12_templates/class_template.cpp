#include <iostream>
using namespace std;

// A simple vector-like generic box
template <typename T>
class Box {
  T value;
public:
  void set(const T& v) { value = v; }  // store a copy
  T get() const { return value; }      // return the stored value
};

int main() {
  Box<int> bi;     // Box specialized with int
  bi.set(42);
  cout << bi.get() << "\n"; // prints 42
  Box<string> bs;  // Box specialized with string
  bs.set("Hello");
  cout << bs.get() << "\n"; // prints Hello
  return 0;
}
