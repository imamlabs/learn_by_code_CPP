#include <iostream>
using namespace std;

int main() {
  int grid[2][3] = { {1,2,3}, {4,5,6} }; // 2 rows, 3 columns
  cout << grid[1][2] << "\n";            // second row, third col -> 6
  return 0;
}
