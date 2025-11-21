#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Teacher provied number: ";
    cin >> a >> b >> c;
    int max = 0;

    if ((a > b) and (a > c))
    {
        max = a;
    }

    else if ((b > a) and (b > c))
    {
        max = b;
    }

    else if ((c > a) and (c > b))
    {
        max = c;
    }

    cout << "The provied number: " << max << endl;

    if (max >= 40)
    {
        cout << "pass" << endl;
    }

    else
    {
        cout << "Fall" << endl;
    }
}