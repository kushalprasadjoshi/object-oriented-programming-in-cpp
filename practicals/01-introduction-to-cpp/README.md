# Lab 01: Introduction to C++

## C++
C++ is an object oriented programming language develped by Bjarne Strustrup at Bell Labs at 1980. It has undergone many changes and improvements. Standardized in 1988 by American National Standards Institute (ANSI) and International Standards Organization (ISO) by incorporating not only new features but also the changes suggested by the user group.

C++ is derived from C language and we can say it is a superset of C as every correct statement in C is also a correct statement in C++ although the reverse is not true. The most important elements added to create C++ are classes and objects, inheritance, function overloading and operator overloading. C++ was originally called C with classes.

---

## Experiment 1
```c++
/*
Experiment 1:
WAP to find factorial of a number with C++.
*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int number;
    long long factorial = 1;
    cout << "Enter the number you want to find factorial of: ";
    cin >> number;
    
    if (number >= 0)
    {
        for (; number != 0; number--)
        {
            factorial *= number;
        }
    }

    cout << "The facotrial is " << factorial;

    return 0;
}
```

**Output:**
```output
Enter the number you want to find factorial of: 7
The facotrial is 5040
```

---

## Experiment 2
```c
/*
Experiment 2:
WAP to store the name and phone number of students using structure.
Print them after storing.
*/

#include <stdio.h>
#include <string.h>

typedef struct Student
{
    char name[20];
    long long phoneNumber;
} Student;

int main(int argc, char const *argv[])
{
    Student student;

    strcpy(student.name, "Kushal Prasad Joshi");
    student.phoneNumber = 9700000000;

    printf("The name of student is %s.\n", student.name);
    printf("The phone number of student is %lld.\n", student.phoneNumber);

    return 0;
}
```

**Output:**
```output
The name of student is Kushal Prasad Joshi.
The phone number of student is 9700000000.
```

---

## Experiment 3
```c++
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
```

**Output:**
```output
The name of student is Kushal Prasad Joshi
The phone number of student is 9700000000
```

---

## Experiment 4
```c++
/*
Experiment 4:
WAP to print sum and average of three numbers using functions in C++
*/

#include <iostream>

using namespace std;

int sum(int a, int b, int c)
{
    return a + b + c;
}

float average(int sum)
{
    return sum / 3.0f;
}

int main(int argc, char const *argv[])
{
    cout << "The sum of 1, 2 and 3 is " << sum(1, 2, 3) << endl;
    cout << "The average of 1, 2 and 3 is " << average(sum(1, 2, 3)) << endl;

    return 0;
}
```

**Output:**
```output
The sum of 1, 2 and 3 is 6
The average of 1, 2 and 3 is 2
```

---
