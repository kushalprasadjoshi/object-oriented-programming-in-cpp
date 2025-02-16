# Lab 06: Inheritance

## Inheritance
The mechanism of deriving a new class from old class is called inheritance. The old class is refered as the base class or super class and new class is refered as derived class or sub class.

### Single Inheritance
![Single Inheritance](/assets/single-inheritance.png "Digram of single inheritance")

### Hierarchical Inheritance
![Hierarchicla Inheritance](/assets/hierarchical-inheritance.png "Digram of hierarchical inheritance")

### Multiple Inheritance
![Multiple Inheritance](/assets/multiple-inheritance.png "Digram of multiple inheritance")

---

## Experiment 1
```c++
/*
WAP to create a class vehicle that contains data as brand.
Read and display the brand of the vehicle.
Create another class that contains name of vehicle, color and year of
manifacture of vehicle. Derive all the information of class vehicle and display
the information.
*/

#include <iostream>

using namespace std;

class Vehicle {
protected:
  string brand;
};

class Car : private Vehicle {
  string name, color, yearOfManifacture;

public:
  void setDetails() {
    cout << "Enter brand, name, color and year of manifacture of vehicle: ";
    cin >> brand >> name >> color >> yearOfManifacture;
  }

  void getDetails() {
    cout << "The brand of vehicle is " << brand << endl
         << "The name of vehicle is " << name << endl
         << "The color of vehicle is " << color << endl
         << "The year of manifacture  of vehicle is " << yearOfManifacture
         << endl;
  }
};

int main() {
  Car car;
  car.setDetails();
  car.getDetails();

  return 0;
}
```

**Output:**
```output
Enter brand, name, color and year of manifacture of vehicle: Mahindra Thar Black 2022
The brand of vehicle is Mahindra
The name of vehicle is Thar
The color of vehicle is Black
The year of manifacture  of vehicle is 2022
```

---

## Experiment 2
```c++
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
```

**Output:**
```output
Enter name , address, age, qualification and department of teacher: KG Kathmandu 45 Mast
ers SCT
The detail of teacher is as follows:
Name: KG
Address: Kathmandu
Age: 45
Qualification: Masters
Department: SCT

Enter name , address, age, program and semester of student: Kushal Lalitpur 20 BCE 2
The detail of student is as follows:
Name: Kushal
Address: Lalitpur
Age: 20
Program: BCE
```

---

## Experiment 3
```c++
/*
Show multiple inheritance in which class Gamma inherits two classes Alpha and
Beta. In the program all the classes must have their dispaly functions. The
Gamma class inherits two classes so it must have two datas one from each.
Use constructors to initialize the objects.
*/

#include <iostream>

using namespace std;

class Alpha {
protected:
  int alpha;

public:
  Alpha(int alpha) { this->alpha = alpha; }
  void showAlpha() { cout << "The value of alpha is : " << alpha << endl; }
};

class Beta {
protected:
  int beta;

public:
  Beta(int beta) { this->beta = beta; }
  void showBeta() { cout << "The value of beta is : " << beta << endl; }
};

class Gamma : protected Alpha, protected Beta {
public:
  Gamma(int alpha, int beta) : Alpha(alpha), Beta(beta) {}

  void showGamma() {
    showAlpha();
    showBeta();
  }
};

int main(int argc, char const *argv[]) {
  Gamma gamma(2, 3);
  gamma.showGamma();

  return 0;
}
```

**Output:**
```output
The value of alpha is : 2
The value of beta is : 3
```

---
