#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter your Alphabets: ";
    cin >> ch;

    if ((ch >= 'a' and ch <= 'z') or (ch >= 'A' and ch <= 'Z'))
    {
        cout << "This is Alphabets." << endl;
    }

    else
    {
        cout << "This is not Alphabets." << endl;
    }
}