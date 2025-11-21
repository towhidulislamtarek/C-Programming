#include <iostream>
using namespace std;

int main()
{
    int n, x, y, c, z, p1, p2, p3;
    cin >> n >> x >> y >> z >> c;

    y = y + x;
    z = z + y;
    p1 = c;
    p2 = c * c;
    p3 = c * c * c;

    if (x == p1 or x == p2 or x == p3)
    {
        cout << "Elimint 1st hape." << endl;
    }

    else if (y == p1 or y == p2 or y == p3)
    {
        cout << "Eleminated 2nd hape." << endl;
    }

    else if (z == p1 or z == p2 or z == p3)
    {
        cout << "Eleminated 3rd hape." << endl;
    }

    else
    {
        cout << "Safe" << endl;
    }
}