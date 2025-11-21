#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter number: ";
    cin >> year;

    if (((year % 4 == 0) and (year % 100 != 0)) or (year % 400 == 0))
    {
        cout << "This is leap year." << endl;
    }

    else
    {
        cout << "This is not leap year." << endl;
    }
}