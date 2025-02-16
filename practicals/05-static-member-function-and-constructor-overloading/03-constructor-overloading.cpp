/*
WAP to read first name and second name then concatinate them into full name
using constructor overloading.
*/

#include <iostream>

using namespace std;

class Name {
  string firstName, secondName, fullName;

public:
  Name() { this->fullName = "Unknown"; }
  Name(string fullName) : fullName(fullName) {}
  Name(string firstName, string lastName)
      : fullName(firstName + " " + lastName) {}

  void display() { cout << "Name : " << fullName << endl; }
};

int main(int argc, char const *argv[]) {
  Name name1;
  Name name2("Kushal");
  Name name3("Kushal", "Joshi");

  name1.display();
  name2.display();
  name3.display();

  return 0;
}
