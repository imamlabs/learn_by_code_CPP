#include <iostream>
#include <fstream>   // file streams
#include <string>
using namespace std;

int main() {
  ofstream out("sample.txt");     // create output file stream
  out << "Line A\nLine B\n";      // write lines
  out.close();                    // flush and close file

  ifstream in("sample.txt");      // create input file stream
  string line;                    // buffer for reading
  while (getline(in, line)) {     // read until EOF
    cout << line << "\n";         // echo each line
  }
  in.close();                     // close input file
  return 0;
}
