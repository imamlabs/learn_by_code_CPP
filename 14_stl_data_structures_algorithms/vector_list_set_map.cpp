#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <map>
using namespace std;

int main() {
  vector<int> v = {3,1,2};      // dynamic array
  v.push_back(5);               // append value
  list<int> L = {7,8,9};        // doubly-linked list
  set<int> S = {2,2,3,1};       // unique sorted elements -> {1,2,3}
  map<string,int> M;            // key-value dictionary
  M["Alice"] = 10;              // insert a pair

  cout << "vector size " << v.size() << "\n";
  cout << "set contains 2: " << (S.count(2) ? "yes" : "no") << "\n";
  cout << "Alice score " << M["Alice"] << "\n";
  return 0;
}
