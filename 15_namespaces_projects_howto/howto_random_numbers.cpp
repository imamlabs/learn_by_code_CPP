#include <iostream>
#include <cstdlib>  // rand, srand
#include <ctime>    // time for seed
using namespace std;

int main() {
  srand(static_cast<unsigned>(time(nullptr))); // seed RNG with current time
  int r = rand() % 100;   // random number in [0,99]
  cout << r << "\n";      // show result
  return 0;
}
