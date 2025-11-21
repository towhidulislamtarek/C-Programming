#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter this character: ";
    cin >> ch;

    if (ch >= 'A' and ch <= 'Z')
    {
        cout << ch << " is uperchase Alfabit." << endl;
    }

    else if (ch >= 'a' and ch <= 'z')
    {
        cout << ch << " is lowercase Alfabit." << endl;
    }

    else
    {
        cout << "This is not lowercase and upercase Alfabit." << endl;
    }
}