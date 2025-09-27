#include <iostream>
#include <string>
using namespace std;

// Define a struct type 'Book' with fields
struct Book {
  string title;  // book title text
  int pages;     // number of pages
};

// Define an enum for status values
enum Status { Draft, Published, Archived };

int main() {
  Book b = {"C++ Guide", 300};        // aggregate initialization
  Status st = Published;              // enum value
  cout << b.title << " " << b.pages << "\n"; // access struct fields
  cout << st << "\n";                 // prints underlying int (1)
  return 0;
}
