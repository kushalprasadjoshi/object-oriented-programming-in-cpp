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
