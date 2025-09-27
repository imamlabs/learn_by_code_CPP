// Pointer ke pointer (int**)
#include <iostream>
using namespace std;

int main() {
  int value = 5;          // nilai awal
  int* p = &value;        // p menunjuk ke value
  int** pp = &p;          // pp menunjuk ke p
  cout << **pp << "\n";   // dereference dua kali -> 5
  return 0;
}
