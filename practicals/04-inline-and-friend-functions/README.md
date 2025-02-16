# Lab 04: Inline Function and Friend Function

## Inline Function
C++ proposes new feature called inline function. An inline function is a function that is expanded in line when it is invoked. That is the compiler replaces the function call with the corresponding function code.

**Syntax:**
```c++
inline function_name(/*Arguments*/) {
  // Function body
}
```

Remember that it is a request to the compiler not a command so, the compiler has power to deny.

---

## Friend Function
The outside fucntion cannot access the private data of the class but there could be situation where we could like two classes to share a particular data. C++ allow the common function to have access to the private data od the class. Such a function may or maynot be the member of any of the classes. To make an outside function "friendly" to a class, we have to simply declare that function as friend of the class.

**Syntax:**
```c++
friend return_type function_name(arguments);
```

It should be noted that a function defination doesn't use friend keyword or scope resolution operator (`::`). A function can be declared as friend in any number of classes. A friend function, although not a member function has full access right to the private member of the class.

---

## Experiment 1
```c++
/*
Experiment 1:
Assume that a customer will get 10% discount for a shirt.
Use inline function to display the net payment to the shopkeeper by the
customer.
*/

#include <iostream>

using namespace std;

inline void netPayment(float netCost) { cout << "Total cost = " << netCost; }

int main(int argc, char const *argv[]) {
  int costOfShirt = 1500;
  netPayment(costOfShirt - 10.0f / 100 * costOfShirt);

  return 0;
}
```

**Output:**
```output
Total cost = 1350
```

---

## Experiment 2
```c++
/*
Experiment 2:
WAP to swap numbers of two classes.
Use one data from one class and another class.
Swap using the concept of friend function.
*/

#include <iostream>

using namespace std;

class B;

class A {
  int x = 2;

public:
  friend void swap(A, B);
};

class B {
  int y = 3;

public:
  friend void swap(A, B);
};

void swap(A a, B b) {
  cout << "Before swapping : " << a.x << " and " << b.y << endl;
  int temp = a.x;
  a.x = b.y;
  b.y = temp;
  cout << "After swapping : " << a.x << " and " << b.y << endl;
}

int main(int argc, char const *argv[]) {
  A a;
  B b;
  swap(a, b);

  return 0;
}
```

**Output:**
```output
Before swapping : 2 and 3
After swapping : 3 and 2
```

---