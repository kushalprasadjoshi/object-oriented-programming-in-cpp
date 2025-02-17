/*
Design a class student with private data members roll number, name and total
marks. Use constructor to initialize data. Overload '>' operator to compare two
Student objects based on their total marks. Create an array of Student and find
the Student with highest marks. Display the information of topper studemt.
*/

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNumber;
    string name;
    float totalMarks;

public:
    Student(int r, string n, float m) : rollNumber(r), name(n), totalMarks(m) {}

    bool operator>(const Student& other) const {
        return this->totalMarks > other.totalMarks;
    }

    void display() const {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Total Marks: " << totalMarks << endl;
    }
};

int main() {
    Student students[] = {
        Student(1, "Alice", 85.5),
        Student(2, "Bob", 90.0),
        Student(3, "Charlie", 88.0)
    };

    Student topper = students[0];
    for (int i = 1; i < 3; ++i) {
        if (students[i] > topper) {
            topper = students[i];
        }
    }

    cout << "Topper Student Information:" << endl;
    topper.display();

    return 0;
}
