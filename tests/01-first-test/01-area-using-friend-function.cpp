/*
WAP that displays the area of rectangle and circle using friend function in C++.
Use constructor to initialize the dimensions of shapes.
[10 marks]
*/

#include <iostream>

using namespace std;

class Rectangle {
  int length, breadth;

public:
  //   Rectangle(int length, int breadth) {
  //     this->length = length;
  //     this->breadth = breadth;
  //   }
  Rectangle(int length, int breadth) : length(length), breadth(breadth) {}  // Alternative

  friend double area(Rectangle);
};

class Circle {
  int radius;

public:
  //   Circle(int radius) { this->radius = radius; }
  Circle(int radius) : radius(radius) {} // This can also be used

  friend double area(Circle);
};

double area(Rectangle rectangle) {
  return rectangle.length * rectangle.breadth;
}
double area(Circle circle) { return 3.14 * circle.radius * circle.radius; }

int main(int argc, char const *argv[]) {
  Rectangle rectangle(2, 4);
  cout << "The area of rectangle is " << area(rectangle) << endl;

  Circle circle(5);
  cout << "The area of circle is " << area(circle) << endl;

  return 0;
}
