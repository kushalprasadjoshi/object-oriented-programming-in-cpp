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
