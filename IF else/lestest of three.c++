#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int c;

    cout << "Enter your  1st number : ";
    cin >> a;

    cout << "Enter your 2nd number: ";
    cin >> b;

    cout << "Enter your 3rd number: ";
    cin >> c;

    if (a < b and a < c)
    {
        cout << "A is lost number in three.";
    }

    else if (b < a and b < c)
    {
        cout << "B is lost number in three.";
    }

    else if (c < b and c < a)
    {
        cout << "C is lost number in three.";
    }

    else
    {
        cout << "This numbere is not valite.";
    }
}