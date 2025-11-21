#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter any inperger: ";
    cin >> num;

    if (num > 0)
    {
        cout << "Positive";
    }
    else if (num < 0)
    {
        cout << "Negative";
    }
    else if (num == 0)
    {
        cout << "same";
    }
    return 0;
}