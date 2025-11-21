#include <iostream>
using namespace std;

int main()
{
    int side_1;
    cout << "Enter this side_1: ";
    cin >> side_1;

    int side_2;
    cout << "Enter this side_2: ";
    cin >> side_2;

    int side_3;
    cout << "Enter this side_3: ";
    cin >> side_3;

    if (side_1 == side_2 and side_2 == side_3)
    {
        cout << "Equilateral triangle" << endl;
    }

    else if (side_1 == side_2 or side_1 == side_3 or side_2 == side_3)
    {
        cout << "Isoseelas triangle" << endl;
    }

    else
    {
        cout << "Sealen triangle" << endl;
    }
}