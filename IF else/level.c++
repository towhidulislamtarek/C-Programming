#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    a = a % 100;
    b = b % 100;
    c = c % 100;
    d = d % 100;

    int any = (a * b * c * d) / 100;

    if (any <= 25)
    {
        cout << "Level 0" << endl;
    }

    else if (any <= 50)
    {
        cout << "Level 1" << endl;
    }

    else if (any <= 25)
    {
        cout << "Level 2" << endl;
    }
    else
    {
        cout << "Level 3" << endl;
    }
}