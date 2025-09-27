// Iterasi menggunakan iterator
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v = {10,20,30};           // data
  for (auto it = v.begin(); it != v.end(); ++it) { // iterator
    cout << *it << " ";                 // dereference untuk nilai
  }
  cout << "\n";                          // baris baru
  return 0;
}
