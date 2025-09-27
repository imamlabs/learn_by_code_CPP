#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  vector<int> v = {5,2,9,1,5};
  sort(v.begin(), v.end());              // ascending
  auto it = find(v.begin(), v.end(), 5); // find first 5
  if (it != v.end()) cout << "Found 5\n";
  for (int x : v) cout << x << " ";      // prints 1 2 5 5 9
  return 0;
}
