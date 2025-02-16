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
