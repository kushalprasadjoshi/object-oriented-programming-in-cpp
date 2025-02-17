/*
Write a program in C++ to find the volume of Cube, Cylinder, and Sphere using
function overloading.

HINT:
    volume of cylinder = pi * r*r * h
    volume of cube = l*l*l
    volume of sphere = (4/3) * pi * r*r*r
*/

#include <iostream>

using namespace std;

void volume(int length) {
  cout << "The volume of cube is : " << length * length * length << endl;
}

void volume(double radius, double height) {
  cout << "The volume of cylinder is : " << 3.14 * radius * radius * height
       << endl;
}

void volume(double radius) {
  cout << "The volume of sphere is : "
       << (4 / 3) * 3.14 * radius * radius * radius << endl;
}

int main() {
  volume(1.0);
  volume(1.0, 2.0);
  volume(3);

  return 0;
}
