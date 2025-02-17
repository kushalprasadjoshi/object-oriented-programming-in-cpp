// The visibility mode: private -> public = not inherited

#include <iostream>

using namespace std;

class A {
private:
  void displayA() { cout << "I am class A" << endl; }
};

class B : public A {
public:
  void displayB() { cout << "I am class B" << endl; }
};

int main() {
  B b;

  //   b.displayA(); --> ERROR! Since the function isn't inherited
  b.displayB();

  return 0;
}
