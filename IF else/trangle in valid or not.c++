#include <iostream>
using namespace std;

int main()
{
    int side_1;
    cout << "Enter 1st side number: ";
    cin >> side_1;

    int side_2;
    cout << "Enter 2nd side number: ";
    cin >> side_2;

    int side_3;
    cout << "Enter 3rd number: ";
    cin >> side_3;

    if ((side_1 + side_2 > side_3) and
        (side_1 + side_3 > side_2) and
        (side_2 + side_3 > side_1))
    {
        cout << "This is vaild" << endl;
    }

    else
    {
        cout << "This is not vaild" << endl;
    }
}