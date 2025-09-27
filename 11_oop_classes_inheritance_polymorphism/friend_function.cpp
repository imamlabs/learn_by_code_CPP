// Friend function dapat mengakses anggota private
#include <iostream>
using namespace std;

class Secret {
private:
  int code;                        // data private
public:
  Secret(int c) : code(c) {}       // konstruktor
  friend void reveal(const Secret& s); // deklarasi friend
};

void reveal(const Secret& s) {     // implementasi friend
  cout << s.code << "\n";          // akses langsung ke private
}

int main() {
  Secret sec(1234);                // buat objek
  reveal(sec);                     // friend dapat melihat code
  return 0;
}
