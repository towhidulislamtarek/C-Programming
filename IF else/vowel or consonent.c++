#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter any character: ";
    cin >> ch;

    if (ch == 'a' and ch == 'e' and ch == 'i' and ch == 'o' and ch == 'u' or
        ch == 'A' and ch == 'E' and ch == 'I' and ch == 'O' and ch == 'U')
    {
        cout << "This is vowel." << endl;
    }

    else if ((ch >= 'a' and ch <= 'z') or (ch >= 'A' and ch <= 'Z'))
    {
        cout << "This is consonents." << endl;
    }

    else
    {
        cout << "This is not Alfabet." << endl;
    }
}
