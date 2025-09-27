#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  vector<int> v = {5,2,9,1};        // sample vector
  sort(v.begin(), v.end(),          // custom comparator using lambda
       [](int a, int b){ return a < b; });
  for (int x : v) cout << x << " "; // prints 1 2 5 9
  return 0;
}
