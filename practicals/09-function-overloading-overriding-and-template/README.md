# Lab 09: Function Overloading, Function Overriding and Templates

## Function Overloading
Function overloading is a concept in which multiple functions with same name are allowed.

**Example:**
```c++
int functionName(int a);
double functionName(double a);
void functionName(int a, double b);
```

---

## Fucntion Overriding
Function overriding is a concept in which a derived class can redefine the parent class function.
![Function Overriding](/assets/method-overriding.png "Digram of method overriding")

---

## Templates
Templates enable the creation of functions, classes and variables that can operate on any kind of data type.

```c++
template <typename T>
T functionName(T parameter) {
    // function body
}

T result = functionName<T>(parameter); // Call template function
```

---

## Experiment 1
```c++
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
```

**Output:**
```output
The volume of sphere is : 3.14
The volume of cylinder is : 6.28
The volume of cube is : 27
```

---

## Experiment 2
```c++
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
```

**Output:**
```output
Enter base and height of traingle: 4 5
The area of traingle is 10
Enter length and breadth of rectangle: 6 7
The area of rectangle is 42
```

---

## Experiment 3
```c++
/*
Write a C++ program to find the square of a number using template.
*/

#include <iostream>

using namespace std;

template <typename t>

t getSquare(t num) {
  return num * num;
}

int main(int argc, char const *argv[]) {
  cout << "The square of 2 is " << getSquare<int>(2);

  return 0;
}
```

**Output:**
```output
The square of 2 is 4
```

---
