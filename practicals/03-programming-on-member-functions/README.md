# Lab 03: Programming on Member Functions, Inline Functions and Default Arguments

## Pass By Reference
When the address of the variable is passed, the function works directly on the actual variable object used in the call. This means that any changes made on the variable inside the function will be reflected in the actual variable.

**Syntax:**
```c++
return_type function_name(datatype &variable, datatype &variable) {
    // Code to be executed
}
```

---

## Inline Function
C++ proposes new feature called inline function. An inline function is a function that is expanded in the line when it is invoked. That is the compiler replaces the function call with the corresponding function code.

**Syntax:**
```c++
inline function_name(/*parameters*/) {
    // Function body
}
```

---

## Default Arguments
C++ allows us to call a function without specifying all it's arguments. In such case, the function assigns a default value to the parameter which doesn't have a matching argument in a function call.

**Example:**
```c++
float amount(float principle, int period, float rate=0.15) {
    // Function body
}
```

A subsequent function call like:
```c++
value = amount(500, 7); // One argument missing
```
It passes the value of 5000 to principle and 7 to period and then it lets the function use default value of 0.15 for rate

---

## Experiment 1
```c++
/*
Experiment 1:
Create a class that captures and display the airline tickets.
It should contain departure and arrival city, the flight number and seat
argument. The seat arrangement must contain the row and the seat number (like
12F). Display tickets for n number of passengers.
*/

#include <iostream>

#define N 2

using namespace std;

class ATS {
private:
  string name, depCty, arivlCty, seatNo;
  int flightNo;

public:
  void setDetails() { cin >> name >> depCty >> arivlCty >> flightNo >> seatNo; }

  void getDetails() {
    cout << name << " from " << depCty << " to " << arivlCty << " on flight "
         << flightNo << " on seat " << seatNo << endl;
  }
};

int main(int argc, char const *argv[]) {
  ATS customer[N];

  // Set details for customers
  cout << "Enter name, departure city, arrival city, flight number and seat "
          "number of customer: "
       << endl;
  for (int i = 0; i < N; i++) {
    cout << "Customer" << i + 1 << " :  ";
    customer[i].setDetails();
  }

  cout << endl << endl; // For convinence output

  // Get details for customers
  cout << "The details of your customers is as follows: " << endl;
  for (int i = 0; i < N; i++) {
    cout << "Customer" << i + 1 << " :  ";
    customer[i].getDetails();
  }

  return 0;
}
```

**Output:**
```output
Enter name, departure city, arrival city, flight number and seat number of customer: 
Customer1 :  Kushal Dhanghadi Kathmandu 7777 777788
Customer2 :  Manish Kathmandu Janakpur 9999 999934


The details of your customers is as follows:
Customer1 :  Kushal from Dhanghadi to Kathmandu on flight 7777 on seat 777788
Customer2 :  Manish from Kathmandu to Janakpur on flight 9999 on seat 999934
```

---

## Experiment 2
```c++
/*
Experiment 2:
Define a class Point that stores the x and y coordinates of a point.
The class uses parameterized constructor for initializing the class objects.
Display the point in the form as <| Point P1 = (x, y) |>
*/

#include <iostream>

using namespace std;

class Coordinates {
private:
  int x, y;

public:
  Coordinates(int x, int y) {
    this->x = x;
    this->y = y;
  }
  ~Coordinates() { cout << "Point P1 = ( " << x << ", " << y << ")" << endl; }
};

int main(int argc, char const *argv[]) {
  int x, y;
  cout << "Enter the value of x and y coordinates: ";
  cin >> x >> y;

  Coordinates coordinate = Coordinates(x, y);

  return 0;
}
```

**Output:**
```output
Enter the value of x and y coordinates: 45 50
Point P1 = ( 45, 50)
```

---

## Experiment 3
```c++
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
```

**Output:**
```output
Enter the length and breadth of a rectangle: 3 4
The area of rectangle is 12
```

---
