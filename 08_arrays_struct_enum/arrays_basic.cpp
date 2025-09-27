#include <iostream>
using namespace std;

int main() {
  int nums[4] = {10, 20, 30, 40}; // fixed-size array of 4 ints
  cout << nums[0] << "\n";        // first element -> 10
  cout << sizeof(nums)/sizeof(nums[0]) << "\n"; // number of elements -> 4
  return 0;
}
