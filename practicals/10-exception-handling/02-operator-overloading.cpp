/*  
    WAP to create menu and operator on the given menu by overload  
    img operator  
    i) add using + operator  
    ii) subtract using - operator  
    iii) multiply using * operator  
    iv) exit from menu  
*/

#include <iostream>
using namespace std;

class Calculation
{
    double n1, results;

public:
    Calculation() {}
    Calculation(double n1) : n1(n1) {}
    void operator +(Calculation c)
    {
    cout << n1 << "+" << c.n1 << "=" << (n1 + c.n1);
    }

    void operator -(Calculation c)
    {
    cout << n1 << "-" << c.n1 << "=" << (n1 - c.n1);
    }

    void operator *(Calculation c)
    {
    cout << n1 << "*" << c.n1 << "=" << (n1 * c.n1);
    }

};

int main()
{
    double no, no2;
    cout << "Enter two numbers:" << endl;
    cin >> no >> no2;

    char choice;
    cout << "Enter the operation to be done(+, -, *, e for exit): ";

    cin >> choice;

    Calculation obj1(no), obj2(no2);
    switch (choice)
    {
    case '+':
    (obj1 + obj2);
    break;

    case '-':
    (obj1 - obj2);
    break;

    case '*':
    (obj1 * obj2);
    break;

    case 'e':
    (obj1 * obj2);
    break;

    default:
    cout << "INVALID OPTIONS!";
    break;
    }
}