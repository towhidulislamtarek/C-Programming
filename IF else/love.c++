#include <iostream>
using namespace std;

int main()
{
    int love;
    cout << "Do you love me?" << endl;
    cout << "Yes=2,No=1" << endl;
    cout << "please answer me=" << endl;
    cin >> love;

    if (love % 2 == 0)
    {
        cout << "I love you." << endl;
        cout << "Will you marry me?" << endl;
    }
    else
    {
        cout << "sorry." << endl;
        cout << "I will never disturb again." << endl;
    }

    return 0;
}
