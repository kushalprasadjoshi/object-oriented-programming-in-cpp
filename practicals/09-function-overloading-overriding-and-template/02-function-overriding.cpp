/*
Create an abstract class Shape with two member functions getData() for
initialization and area() for finding area of different shapes. Derive two
specific classes Traingle and Rectangle which override the both functions. Use
these classes in the main function and display the area of Traingle and
Rectangle.
*/

#include <iostream>

using namespace std;

class Shapes {
public:
  virtual void getData() = 0;
  virtual void area() = 0;
};

class Rectangle : public Shapes {
  int length, breadth;

public:
  void getData() {
    cout << "Enter length and breadth of rectangle: ";
    cin >> length >> breadth;
  }
  void area() {
    cout << "The area of rectangle is " << length * breadth << endl;
  }
};

class Traingle : public Shapes {
  int base, height;

public:
  void getData() {
    cout << "Enter base and height of traingle: ";
    cin >> base >> height;
  }
  void area() { cout << "The area of traingle is " << (1.0f / 2) * base * height << endl; }
};

int main(int argc, char const *argv[]) {

  Shapes *pointer = new Traingle;
  pointer->getData();
  pointer->area();

  pointer = new Rectangle;
  pointer->getData();
  pointer->area();

  return 0;
}
