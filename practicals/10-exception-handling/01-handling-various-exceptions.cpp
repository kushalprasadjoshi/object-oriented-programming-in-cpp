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