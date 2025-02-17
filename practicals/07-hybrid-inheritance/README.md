# Lab 07: Hybrid Inheritance

## Hybrid Inheritance
Combination of more than one type of inheritance is known as hybrid inheritance.
![Hybrid Inheritance](/assets/hybrid-inheritance.png "Digram of hybrid inheritance")

## Multiple Iheritance
Deriving directly form more than one class is usually multiple inheritance.
![Multiple Inheritance](/assets/multiple-inheritance.png "Digram of multiple inheritance")


## Experiment 1
```c++
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
```

**Output:**
```output
i. Using constructor
---------------------------------------------
Name: Kushal
Code: k23
Year of experience: 3
Salary: 500000
Record No.: 56

ii. Without using constructor
---------------------------------------------
Enter name, code, year of experience, salary and record no. of person: Kushal K23 3 500000 56
Name: Kushal
Code: K23
Year of experience: 3
Salary: 500000
Record No.: 56
```

---
