// Template dengan dua parameter tipe
#include <iostream>
using namespace std;

template <typename K, typename V>
struct Pair {
  K key;    // kunci (generic)
  V value;  // nilai (generic)
};

int main() {
  Pair<string, int> p {"age", 30}; // instansiasi dengan string,int
  cout << p.key << "=" << p.value << "\n";
  return 0;
}
