#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "The number is: ";
    cin >> number;

    if ((number % 5 == 0) and (number % 11 == 0))
    {
        cout << "The number is divisible by 5 and 11. " << endl;
    }

    else
    {
        cout << "The number is not divisible by 5 and 11. " << endl;
    }
    return 0;
}