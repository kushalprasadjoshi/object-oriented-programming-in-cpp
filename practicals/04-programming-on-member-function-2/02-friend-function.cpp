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
