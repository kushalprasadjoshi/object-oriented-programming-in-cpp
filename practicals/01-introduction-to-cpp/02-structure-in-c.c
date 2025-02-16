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
