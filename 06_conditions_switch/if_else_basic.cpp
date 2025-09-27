#include <iostream>
using namespace std;

int main() {
  int score = 75;                 // sample score
  if (score >= 80) {              // condition for A
    cout << "Grade A\n";
  } else if (score >= 70) {       // condition for B
    cout << "Grade B\n";
  } else {
    cout << "Below B\n";          // default branch
  }
  return 0;
}
