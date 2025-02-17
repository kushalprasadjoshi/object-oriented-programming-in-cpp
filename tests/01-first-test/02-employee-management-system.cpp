/*
Create a simple Employee Mangement System.
Employee should have employee id, name, position, salary.
Implement the following functionalities:
1. Create a new employee.
2. Update the salary of an employee.
3. Promote an employee by updating their position.
4. Display the details of an employee.
*/

#include <iostream>

using namespace std;

class Employee {
  int employeeId;
  float salary;
  string name, position;

public:
  Employee(int employeeId, float Salary, string name, string position) {
    this->employeeId = employeeId;
    this->salary = salary;
    this->name = name;
    this->position = position;
  }

  void updateSalary(float salary) { this->salary = salary; }
  void updatePosition(string position) { this->position = position; }

  void printDetails() {
    cout << "The details of employee is as follow: " << endl
        << "Id: " << employeeId << endl
        << "Name: " << name << endl
        << "Salary: " << salary << endl
        << "Position: " << position << endl;
  }
};

int main(int argc, char const *argv[])
{
    // 1. Create an employee
    Employee employee(2, 50000, "Kushal", "Manager");

    // Update salary of employee
    employee.updateSalary(70000);

    // Update position of employee
    employee.updatePosition("CEO");

    // Print details of employee
    employee.printDetails();
    
    return 0;
}
