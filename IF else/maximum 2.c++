#include <iostream>
using namespace std;

int main()
{
    int number_1;
    cout << "Enter 1st number: ";
    cin >> number_1;

    int number_2;
    cout << "Enter 2nd number: ";
    cin >> number_2;

    if (number_1 > number_2)
    {
        cout << "The maximum number is: " << number_1 << endl;
    }
    else if (number_2 > number_1)
    {
        cout << "The maximum number is: " << number_2 << endl;
    }

    else if (number_1 == number_2)
    {
        cout << "This is equal" << endl;
    }
}