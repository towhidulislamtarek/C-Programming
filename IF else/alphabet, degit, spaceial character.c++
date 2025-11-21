#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter this character: ";
    cin >> ch;

    if ((ch >= 'a' and ch <= 'z') or (ch >= 'A' and ch <= 'Z'))
    {
        cout << ch << " is a Alphaber." << endl;
    }

    else if (ch >= '0' and ch <= '9')
    {
        cout << ch << " is a digit." << endl;
    }

    else
    {
        cout << "This is spaceial character." << endl;
    }
}