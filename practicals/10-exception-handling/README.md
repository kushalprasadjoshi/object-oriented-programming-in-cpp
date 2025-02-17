# Lab 10: Exception Handling

## Exception Handling
Synchronization errors are handled by exception handling methods

### Try-Catch Blocks
```c++
try {
    // Code that might throw an exception
    throw SomeExceptionType("Error message");
} catch(ExceptionName e) {
    // Handle the exception type here
}
```

### Advantages
- Seperation of exception handling code.
- Selective exception handling.

---

## Experiment 1
```c++
/*
WAP to input an integer value from the user. If the value is <0,
then raise invalid_argument xception saying "Negative value not a
llowed". If value is equal to 0, raise domain_error saying "Value
cannot be zero" and
for value >100, raise out_of_range exception saying "Value out of
range".
*/
#include <iostream>
#include<stdexcept>
using namespace std;

void getValue(int value)
{
    if (value < 0)
    throw invalid_argument("Negative value not allowed");
    else if (value == 0)
    throw domain_error("Value cannot be zero");
    else if (value > 100)
    throw out_of_range("Value out of range");
    else if(value>0 || value<100)
    cout << "Value is: " << value;
    else
    cout<<"Invalid no!!";
//for exception handling of characters or others
}

int main()
{
    int n;
    cout << "Enter the value:";
    cin >> n;
    try
    {
    getValue(n);
    }
    catch (invalid_argument e)
// here e is an object and what() is the function that is already inside class i.e., exception handling
    {
    cerr << e.what() << '\n';
    }

    catch (domain_error d)
    {
    cerr << d.what() << "\n";
    }

    catch (out_of_range o)
    {
    cerr << o.what() << "\n";
    }
}
```

**Output:**
```output
Enter the value:120
Value out of range
```

---

## Experiment 2
```c++
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
```

**Output:**
```output
Enter two numbers:
4 7
Enter the operation to be done(+, -, *, e for exit): *
4*7=28
```

---
