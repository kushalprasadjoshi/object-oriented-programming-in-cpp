// The visibility mode: private -> private = not inherited

#include <iostream>

using namespace std;

class A {
private:
  void displayA() { cout << "I am class A" << endl; }
};

class B : private A {
public:
  void displayB() {
    // displayA(); --> ERROR! Private functions are not inherited
    cout << "I am class B" << endl;
  }
};

int main() {
  B b;

  b.displayB();

  return 0;
}
