# First Test

## Questions
1. WAP that displays the area of rectangle and circle using friend function in C++. Use constructors to initialize the dimensions of shapes. (10)

    [Solution](./01-area-using-friend-function.cpp)

2. Create a simple employee management system. Employee should have employee id, name, position, salary. Implement the following functionlities: (15)  
    - Create a new employee.
    - Update the salary of an employee.
    - Promote an employee by updating their position.
    - Display the details of an employee

    [Solution](./02-employee-management-system.cpp)

---

## Solution of 1
```c++
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
```

**Output:**
```output
The area of rectangle is 8
The area of circle is 78.5
```

---

## Solution of 2
```c++
/*
Create a simple Employee Mangement System.
Employee should have employee id, name, position, salary.
Implement the following functionalities:
1. Create a new employee.
2. Update the salary of an employee.
3. Promote an employee by updating their position.
4. Display the details of an employee.
*/

#include <iostream>

using namespace std;

class Employee {
  int employeeId;
  float salary;
  string name, position;

public:
  Employee(int employeeId, float Salary, string name, string position) {
    this->employeeId = employeeId;
    this->salary = salary;
    this->name = name;
    this->position = position;
  }

  void updateSalary(float salary) { this->salary = salary; }
  void updatePosition(string position) { this->position = position; }

  void printDetails() {
    cout << "The details of employee is as follow: " << endl
        << "Id: " << employeeId << endl
        << "Name: " << name << endl
        << "Salary: " << salary << endl
        << "Position: " << position << endl;
  }
};

int main(int argc, char const *argv[])
{
    // 1. Create an employee
    Employee employee(2, 50000, "Kushal", "Manager");

    // Update salary of employee
    employee.updateSalary(70000);

    // Update position of employee
    employee.updatePosition("CEO");

    // Print details of employee
    employee.printDetails();
    
    return 0;
}
```

**Output:**
```output
The details of employee is as follow: 
Id: 2
Name: Kushal
Salary: 70000
Position: CEO
```

---
