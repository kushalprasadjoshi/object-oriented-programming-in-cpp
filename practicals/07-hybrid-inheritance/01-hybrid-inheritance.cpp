/*
WAP to create the following network:

               Person
            [name, age]
           /        \
          /          \
    Admin            Account
[yearOfExperience]    [salary]
            \        /
             \      /
                Record
              [recordNo]

 i. Implement using constructor.
ii. Implemt without using constructor.
*/

#include <iostream>

using namespace std;

class Person {
public:
  string name, code;
  Person() : name("Kushal"), code("k23") {}
};

class Admin : public virtual Person {
public:
  int yearOfExperience;
  Admin() : yearOfExperience(3) {}
};

class Account : virtual public Person {
public:
  int salary;
  Account() : salary(500000) {}
};

class Record : public Account, public Admin {
public:
  int recordNo;
  Record() : recordNo(56) {}

  void setDetails() {
    cout << "Enter name, code, year of experience, salary and record no. of "
            "person: ";
    cin >> name >> code >> yearOfExperience >> salary >> recordNo;
  }

  void getDetails() {
    cout << "Name: " << name << endl
         << "Code: " << code << endl
         << "Year of experience: " << yearOfExperience << endl
         << "Salary: " << salary << endl
         << "Record No.: " << recordNo << endl;
  }
};

int main() {
  Record record;
  // Using constructor
  cout << endl
       << "i. Using constructor " << endl
       << "---------------------------------------------" << endl;
  record.getDetails();

  // Without using constructor
  cout << endl
       << "ii. Without using constructor " << endl
       << "---------------------------------------------" << endl;
  record.setDetails();
  record.getDetails();

  return 0;
}