// Spesifier akses: private/public
#include <iostream>
using namespace std;

class Account {
private:              // hanya bisa diakses di dalam kelas
  int balance;        // saldo
public:               // bisa diakses dari luar
  Account(int b) : balance(b) {} // konstruktor
  int getBalance() const { return balance; } // getter
  void deposit(int v) { balance += v; }      // menambah saldo
};

int main() {
  Account acc(100);        // buat akun
  acc.deposit(50);         // tambah saldo
  cout << acc.getBalance() << "\n"; // tampilkan total
  return 0;
}
