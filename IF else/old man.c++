#include <iostream>
using namespace std;

int main()
{
    int old_1;
    cout << "Enter 1st man old: ";
    cin >> old_1;

    int old_2;
    cout << "Enter 2nd man old: ";
    cin >> old_2;

    int old_3;
    cout << "Enter 3rd man old: ";
    cin >> old_3;

    if ((old_1 > old_2) and (old_1 > old_3))
    {
        cout << "1st man is old man." << endl;
    }

    else if ((old_2 > old_1) and (old_2 > old_3))
    {
        cout << "2nd man is  old man." << endl;
    }

    else if ((old_3 > old_1) and (old_3 > old_2))
    {
        cout << "3rd man is old man." << endl;
    }

    else
    {
        cout << "Man is non valit." << endl;
    }
}