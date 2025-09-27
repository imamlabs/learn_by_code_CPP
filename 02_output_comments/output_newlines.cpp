#include <iostream>
using namespace std;

int main() {
  cout << "Line 1\n";       // \n inserts a newline
  cout << "Line 2" << endl; // endl also adds newline and flushes the buffer
  cout << "Line 3";         // no newline here
  return 0;
}
