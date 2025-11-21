#include <iostream>
using namespace std;

int main()
{
    int i;
    int n;
    cout << "The number is: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << "The even number: " << i << endl;
        }
    }
    return 0;
}