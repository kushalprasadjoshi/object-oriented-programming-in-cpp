// The visibility mode: public -> public = public

#include <iostream>

using namespace std;

class A {
public:
  void displayA() { cout << "I am class A" << endl; }
};

class B : public A {
public:
  void displayB() { cout << "I am class B" << endl; }
};

int main() {
  B b;

  b.displayA();
  b.displayB();

  return 0;
}
