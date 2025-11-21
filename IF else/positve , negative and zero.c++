#include <iostream>
using namespace std;

int main()
{
    int number_1;
    cout << "Enter 1st number: ";
    cin >> number_1;

    if (number_1 > 0)
    {
        cout << "This is positve number." << number_1 << endl;
    }

    else if (number_1 < 0)
    {
        cout << "This is negatve number." << number_1 << endl;
    }

    else if (number_1 == 0)
    {
        cout << "The number is zero." << endl;
    }

    else
    {
        cout << "This number is not valit.";
    }
}