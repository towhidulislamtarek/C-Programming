#include <iostream>
using namespace std;

int main()
{
    int number_1;
    cout << "Enter 1st number is: ";
    cin >> number_1;

    int number_2;
    cout << "Enter 2nd number is: ";
    cin >> number_2;

    int number_3;
    cout << "Enter 3rd number is: ";
    cin >> number_3;

    if ((number_1 > number_2) and (number_1 > number_3))
    {
        cout << "The maximum number is: " << number_1 << endl;
    }

    else if ((number_2 > number_1) and (number_2 > number_3))
    {
        cout << "The maixmum number is: " << number_2 << endl;
    }

    else if ((number_3 > number_1) and (number_3 > number_2))
    {
        cout << "The maiximu number is: " << number_3 << endl;
    }

    else
    {
        cout << "The number is equal";
    }
}