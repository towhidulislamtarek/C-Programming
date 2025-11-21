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

    int number_3;
    cout << "Enter 3rd number: ";
    cin >> number_3;

    if (number_1 > number_2)
    {
        if (number_1 > number_3)
        {
            cout << "1st number is gratest." << endl;
        }

        else
        {
            cout << "3rd number is gratest." << endl;
        }
    }

    else if (number_2 > number_1)
    {
        if (number_2 > number_3)
        {
            cout << "2nd number is gratest." << endl;
        }

        else
        {
            cout << "3rd number is gratest." << endl;
        }
    }

    else
    {
        cout << "This is not valit." << endl;
    }
}