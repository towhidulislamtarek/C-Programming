#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int n;

    cout << "Enter this last number: ";
    cin >> n;

    for (int i = 1; i <= n; i = i + 1)
    {
        sum = sum + 1;
    }

    return 0;
}