#include <iostream>
#include <stdexcept>  // standard exceptions
using namespace std;

int main() {
  try {
    int denom = 0;                    // zero makes division invalid
    if (denom == 0) throw runtime_error("Division by zero");
    cout << 10 / denom << "\n";       // not executed
  } catch (const exception& ex) {     // catch base exception
    cout << "Error: " << ex.what() << "\n"; // report error message
  }
  return 0;
}
