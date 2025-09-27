#include <iostream>
using namespace std;

int main() {
  auto i = 42;       // type deduced as int
  auto d = 3.14;     // type deduced as double
  auto s = "text";   // type deduced as const char*
  cout << i << " " << d << " " << s << "\n";
  return 0;
}
