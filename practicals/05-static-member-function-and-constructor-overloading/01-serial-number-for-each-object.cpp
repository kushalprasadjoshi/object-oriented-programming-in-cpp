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
