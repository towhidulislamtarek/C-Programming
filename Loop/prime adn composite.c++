#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter your number: ";
    cin >> n;

    bool flag = true;
    for (int i = 2; i <= 2; i++)

    {
        if (n % i == 0)
        {
            flag = false;
            break;
        }
    }

    if (n == 1)
    {
        cout << "Neither prine non composite";
    }

    else if (flag = true)
    {
        cout << "Prime" << endl;
    }

    else
    {
        cout << "Composite";
    }
}