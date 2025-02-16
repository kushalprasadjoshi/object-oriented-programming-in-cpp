/*
WAP to print the area of rectangle by creating a class named Area taking the
value of its length and breadth as parameters of its constructors and having a
function named returnArea() which returns the area of the rectangle. Length and
breadth of a rectangle are entered through keyboard.
*/

#include <iostream>

using namespace std;

class Area {
private:
  int length, breadth;

public:
  Area(int length, int breadth) {
    this->length = length;
    this->breadth = breadth;
  }

  int returnArea() { return length * breadth; }
};

int main(int argc, char const *argv[]) {
  int length, breadth;

  cout << "Enter the length and breadth of a rectangle: ";
  cin >> length >> breadth;

  Area area(length, breadth);
  cout << "The area of rectangle is " << area.returnArea();

  return 0;
}
