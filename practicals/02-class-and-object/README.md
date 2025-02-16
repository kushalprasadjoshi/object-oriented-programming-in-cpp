# Lab 02: Familiarization of Classes and Objects

## Objects
Object consists of the data and the functions that operate on the data. Object data is usually private. Functions other than within those objects cannot access it. On the other hand, functions within the class are generally public. So, the function in one object access the data in the other object through the function of second object.

---

## Classes
In OOP, objects are member of classes. The entire set of data and code of an object can be made a user-defined data type with the help of a class. Once a class has been defined we can create any number of objects belonging to that class.

---

## Experiment 1
```c++
/*
Experiment 1:
WAP to take name, roll number and program of a student using class in C++ in the following way:
1. Without data abstraction.
2. With data abstraction.
*/

#include <iostream>

using namespace std;

// Class without data abstraction
class Student
{
public:
    int rollNumber;
    string name, program;
};

// Class with data abstraction
class PrivateStudent
{
private:
    int rollNumber;
    string name, program;

public:
    void setFields(void)
    {
        cout << "Enter roll number of student: ";
        cin >> rollNumber;
        cout << "Enter name of student: ";
        cin >> name;
        cout << "Enter program of student: ";
        cin >> program;
    }

    void getFields(void)
    {
        cout << "The roll number of student is " << rollNumber << endl;
        cout << "The name of student is " << name << endl;
        cout << "The program of student is " << program << endl;
    }
};

int main(int argc, char const *argv[])
{
    Student student;
    // We can access the data members directly
    cout << "Enter roll number of student: ";
    cin >> student.rollNumber;
    cout << "Enter name of student: ";
    cin >> student.name;
    cout << "Enter program of student: ";
    cin >> student.program;

    cout << "The roll number of student is " << student.rollNumber << endl;
    cout << "The name of student is " << student.name << endl;
    cout << "The program of student is " << student.program << endl;

    cout << endl
         << endl; // For convinence output

    PrivateStudent privateStudent;
    // The data members are private so using the member functions for operations on data members
    privateStudent.setFields();
    privateStudent.getFields();

    return 0;
}
```

**Output:**
```output
Enter roll number of student: 45
Enter name of student: Kushal
Enter program of student: Engineering
The roll number of student is 45
The name of student is Kushal
The program of student is Engineering


Enter roll number of student: 46
Enter name of student: Manish
Enter program of student: IT
The roll number of student is 46
The name of student is Manish
The program of student is IT
```

---

## Experiment 2
```c++
/*
Experiment 2:
Create a class employee with private data name and age.
Use getData and putData as a member function to take input and display the information of n employee.
*/

#include <iostream>

#define N 2

using namespace std;

class Employee
{
private:
    string name;
    int age;

public:
    void setFields(void)
    {
        cout << "Enter name of employee: ";
        cin >> name;
        cout << "Enter age of employee: ";
        cin >> age;
    }

    void getFields(void)
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main(int argc, char const *argv[])
{
    Employee employee[N];

    for (int i = 0; i < N; i++)
    {
        cout << "Enter details of employee" << i + 1 << endl;
        employee[i].setFields();
    }

    cout << endl
         << endl; // For convinence output

    for (int i = 0; i < N; i++)
    {
        cout << "The details of employee" << i + 1 << " are " << endl;
        employee[i].getFields();
    }

    return 0;
}
```

**Output:**
```output
Enter details of employee1
Enter name of employee: Kushal
Enter age of employee: 20
Enter details of employee2
Enter name of employee: Manish
Enter age of employee: 21


The details of employee1 are
Name: Kushal
Age: 20
The details of employee2 are
Name: Manish
Age: 21
```

---