// The visibility mode: private -> protected = not inherited

#include <iostream>

using namespace std;

class A {
private:
  void displayA() { cout << "I am class A" << endl; }
};

class B : protected A {
public:
  void displayB() { cout << "I am class B" << endl; }
};

int main() {
  B b;

  //   b.displayA(); --> ERROR! Since the function isn't inherited
  b.displayB();

  return 0;
}
