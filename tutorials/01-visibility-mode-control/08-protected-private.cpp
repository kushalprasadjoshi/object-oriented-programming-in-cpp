// The visibility mode: protected -> private = private

#include <iostream>

using namespace std;

class A {
protected:
  void displayA() { cout << "I am class A" << endl; }
};

class B : private A {
public:
  void displayB() {
    displayA(); // Private functions can be used inside class
    cout << "I am class B" << endl;
  }
};

int main() {
  B b;

  b.displayB();

  return 0;
}
