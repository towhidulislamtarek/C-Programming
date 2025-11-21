#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter this number: ";
    cin >> a;

    if (a % 5 == 0 or a % 3 == 0)
    {
        cout << "This is number are divisiable of 5 and 3." << endl;
    }

    else
    {
        cout << "This is number are not divisiable fo 5 and 3." << endl;
    }
    return 0;
}