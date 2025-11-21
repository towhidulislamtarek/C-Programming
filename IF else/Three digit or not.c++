#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter this three digit number: ";
    cin >> n;

    if (n > 99 and n < 1000)
    {
        cout <<n<<" is Three digit number.";
    }

    else
    {
        cout << "This is not  three digit number.";
    }

    return 0;
}