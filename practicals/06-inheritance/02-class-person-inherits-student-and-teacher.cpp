/*
WAP to create a class Person with data members name, age and address.
Create another class Teacher with data members qualification and department.
Also create another class Student with data proram and semester.
Both classes are inherited from class Person.
Create member function showData() to display the information required.
*/

#include <iostream>

using namespace std;

class Person {
protected:
  string name, address, age;
};

class Student : private Person {
  string program, semester;

public:
  void readData() {
    cout << "Enter name , address, age, program and semester of student: ";
    cin >> name >> address >> age >> program >> semester;
  }

  void showData() {
    cout << "The detail of student is as follows: " << endl
         << "Name: " << name << endl
         << "Address: " << address << endl
         << "Age: " << age << endl
         << "Program: " << program << endl
         << "Semester: " << semester << endl;
  }
};

class Teacher : private Person {
  string qualification, department;

public:
  void readData() {
    cout << "Enter name , address, age, qualification and department of "
            "teacher: ";
    cin >> name >> address >> age >> qualification >> department;
  }

  void showData() {
    cout << "The detail of teacher is as follows: " << endl
         << "Name: " << name << endl
         << "Address: " << address << endl
         << "Age: " << age << endl
         << "Qualification: " << qualification << endl
         << "Department: " << department << endl;
  }
};

int main(int argc, char const *argv[]) {
  Teacher teacher;
  teacher.readData();
  teacher.showData();

  cout << endl;

  Student student;
  student.readData();
  student.showData();

  return 0;
}
