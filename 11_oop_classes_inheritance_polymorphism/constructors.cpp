#include <iostream>
#include <string>
using namespace std;

class Car {
public:
  string brand;      // car brand
  int year;          // manufacture year

  // Constructor initializes members
  Car(string b, int y) : brand(b), year(y) {}
};

int main() {
  Car c("Toyota", 2020);   // construct with arguments
  cout << c.brand << " " << c.year << "\n";
  return 0;
}
