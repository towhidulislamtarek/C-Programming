#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter your number: ";
    cin >> a;

    if ((a % 3 == 0 or a % 5 == 0) and (a % 15 != 0))
    {
        cout << "This is a dibisible by 5 or 3 but not divisible by 15.";
    }

    else
    {
        cout << "This is a error.";
    }
}