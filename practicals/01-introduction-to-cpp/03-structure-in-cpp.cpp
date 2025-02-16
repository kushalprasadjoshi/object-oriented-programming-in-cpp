/*
Experiment 3:
WAP to input and print the name and phone number of a person using structure in C++.
*/

#include <iostream>

using namespace std;

typedef struct Student
{
    string name;
    long long phoneNumber;

    void getData()
    {
        cout << "The name of student is " << name << endl;
        cout << "The phone number of student is " << phoneNumber << endl;
    }
} Student;

int main(int argc, char const *argv[])
{
    Student student;

    student.name = "Kushal Prasad Joshi";
    student.phoneNumber = 9700000000;

    student.getData();

    return 0;
}
