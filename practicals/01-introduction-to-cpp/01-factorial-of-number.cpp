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
