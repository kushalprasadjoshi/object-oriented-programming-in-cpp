# Lab 05: Static Member Function and Constructor Overloading

## Static Member Function
A static member function has access to only other static members declared in the same class and it can be called using the same class name.

**Syntax:**
```c++
static return_type function_name(/*Argument list*/); // Declaration of static function

class_name::function_name(/*Argument passed*/); // Static member function call
```

---

## Constructor Overloading
Constructor overloading allows a class to have more than one constructor with different parameters. This enables the creation of objects in multiple ways.

**Syntax:**
```c++
class ClassName {
public:
    ClassName(); // Default constructor
    ClassName(parameter1); // Constructor with one parameter
    ClassName(parameter1, parameter2); // Constructor with two parameters
    // More constructors as needed
};
```

---

## Experiment 1
```c++
/*
Create a class that includes a data member that holds a serial number for each
object created from a class i.e. the first object created will be number 1,
second object created will be number 2 and so on. Use the static members or
functions if needed.
*/

#include <iostream>

using namespace std;

class DemoClass {
  static int count;
  int n;

public:
  DemoClass() { n = ++count; }
  void showN() { cout << "The number is " << n << endl; }
  static void showCount() {
    cout << "Object " << count << " is created." << endl;
  }
};

int DemoClass::count;

int main(int argc, char const *argv[]) {
  DemoClass object1, object2, object3;
  object1.showCount();
  object2.showN();

  return 0;
}
```

**Output:**
```output
Object 3 is created.
The number is 2
```

---

## Experiment 2
```c++
/*
Using a class write a program that receives input principle amount, time and
rate keeping rate 8% as default argument. Calculate the simple interest for
three customers.
*/

#include <iostream>

using namespace std;

class SimpleInterest {
  float principle, time, rate;

public:
  SimpleInterest(float principle, float time, float rate = 8) {
    this->principle = principle;
    this->time = time;
    this->rate = rate;
  }

  void output() {
    cout << "Simple interest of " << principle << " after " << time
         << " years and " << rate << " % rate is "
         << (principle * rate * time) / 100 << endl;
  }
};

int main(int argc, char const *argv[]) {
  SimpleInterest simpleInterest1(1000, 2);
  SimpleInterest simpleInterest2(1000, 2, 10);
  SimpleInterest simpleInterest3(1000, 2, 11);

  simpleInterest1.output();
  simpleInterest2.output();
  simpleInterest3.output();

  return 0;
}
```

**Output:**
```output
Simple interest of 1000 after 2 years and 8 % rate is 160
Simple interest of 1000 after 2 years and 10 % rate is 200
Simple interest of 1000 after 2 years and 11 % rate is 220
```

---

## Experiment 3
```c++
/*
WAP to read first name and second name then concatinate them into full name
using constructor overloading.
*/

#include <iostream>

using namespace std;

class Name {
  string firstName, secondName, fullName;

public:
  Name() { this->fullName = "Unknown"; }
  Name(string fullName) : fullName(fullName) {}
  Name(string firstName, string lastName)
      : fullName(firstName + " " + lastName) {}

  void display() { cout << "Name : " << fullName << endl; }
};

int main(int argc, char const *argv[]) {
  Name name1;
  Name name2("Kushal");
  Name name3("Kushal", "Joshi");

  name1.display();
  name2.display();
  name3.display();

  return 0;
}
```

**Output:**
```output
Name : Unknown
Name : Kushal
Name : Kushal Joshi
```

---
