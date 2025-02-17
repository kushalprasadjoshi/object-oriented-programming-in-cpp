// The visibility mode: public -> protected = protected

#include <iostream>

using namespace std;

class A {
public:
  void displayA() { cout << "I am class A" << endl; }
};

class B : protected A {
public:
  void displayB() { cout << "I am class B" << endl; }
};

int main() {
  B b;

  //   b.displayA(); --> ERROR! Since the function is protected
  b.displayB();

  return 0;
}
