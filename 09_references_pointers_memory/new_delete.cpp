#include <iostream>
using namespace std;

int main() {
  int* arr = new int[3]; // allocate array on heap
  arr[0] = 10;           // assign elements
  arr[1] = 20;
  arr[2] = 30;
  cout << arr[1] << "\n"; // prints 20
  delete[] arr;           // free allocated memory
  return 0;
}
