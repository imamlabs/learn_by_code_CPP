// Operasi dasar pada std::string
#include <iostream>
#include <string>
using namespace std;

int main() {
  string s = "Hello";        // string awal
  s.append(" C++");          // menambah teks di akhir
  s.insert(5, ",");          // menyisipkan koma setelah "Hello"
  s.replace(0, 5, "Hi");     // mengganti "Hello" menjadi "Hi"
  cout << s << "\n";         // menampilkan hasil
  cout << s.find("C++") << "\n";    // posisi substring
  cout << s.substr(3, 3) << "\n";   // ambil 3 karakter mulai index 3
  return 0;
}
