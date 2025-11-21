#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int c;
    cout << "The 1st number is: ";
    cin >> a;

    cout << "The 2nd number is: ";
    cin >> b;

    cout << "The 3rd number is: ";
    cin >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << "A is gretest of three.";
        }
        else
        {
            cout << "C is gretest of three.";
        }
    }

    else
    {
        if (b > c)
        {
            cout << "B is gretest of three.";
        }
        else
        {
            cout << "C is gretest of thtee.";
        }
    }
}