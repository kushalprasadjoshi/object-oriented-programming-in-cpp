/*
Experiment 1:
Overload '+' operator to concatenate two strings.
*/

#include <iostream>

using namespace std;

class String {
  string myString;

public:
  String(string myString) : myString(myString) {}
  void display() { cout << myString; }

  String operator+(String stringObject) {
    return String(myString + " " + stringObject.myString);
  }
};

int main(int argc, char const *argv[]) {
  String firstName("Kushal"), middleName("Prasad"), lastName("Joshi");

  String fullName = firstName + middleName + lastName;
  fullName.display();

  return 0;
}
