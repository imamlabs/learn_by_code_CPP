#include <iostream>
using namespace std;

class Shape {
public:
  // virtual enables dynamic dispatch
  virtual double area() const { return 0.0; }
  // virtual destructor recommended for polymorphic base
  virtual ~Shape() = default;
};

class Rect : public Shape {
  double w, h;
public:
  Rect(double w, double h) : w(w), h(h) {}
  double area() const override { return w * h; }
};

class Circle : public Shape {
  double r;
public:
  Circle(double r) : r(r) {}
  double area() const override { return 3.14159 * r * r; }
};

int main() {
  Shape* s1 = new Rect(3, 4);   // base pointer to derived
  Shape* s2 = new Circle(2);    // base pointer to derived
  cout << s1->area() << "\n";   // calls Rect::area -> 12
  cout << s2->area() << "\n";   // calls Circle::area -> 12.56636
  delete s1;                     // free memory
  delete s2;
  return 0;
}
