// Loop for berbasis rentang (C++11)
#include <iostream>
using namespace std;

int main() {
  int arr[] = {1,2,3,4};         // array contoh
  for (int x : arr) {            // iterasi setiap elemen
    cout << x << " ";            // tampilkan elemen
  }
  cout << "\n";                  // baris baru
  return 0;
}
