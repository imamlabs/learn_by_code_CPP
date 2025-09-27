// Menghilangkan ukuran array saat inisialisasi
#include <iostream>
using namespace std;

int main() {
  int nums[] = {2,4,6,8};      // compiler menghitung ukuran otomatis
  cout << sizeof(nums)/sizeof(nums[0]) << "\n"; // jumlah elemen
  return 0;
}
