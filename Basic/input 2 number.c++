#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter 1st nuber: ";
    cin >> x;

    int y;
    cout << "Enter your 2nd number: ";
    cin >> y;

    int number = 0;

    number = x * y;

    cout << "The number is: " << number;
    
    return 0;
}