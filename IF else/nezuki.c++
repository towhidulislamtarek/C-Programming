#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if ((a + b) % 2 == 1 or (a + c) % 2 == 1 or (b + c) % 2 == 1)
    {
        cout << "3 kindom for Nezuko." << endl;
    }

    else
    {
        cout << "You have to chouse two." << endl;
    }
}