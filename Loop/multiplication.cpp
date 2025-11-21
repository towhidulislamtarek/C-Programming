#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Enter this integer: ";
    cin >> num;

    for (int i = 0; i <= 10; i++)
    {
        cout << num << "x " << i << " =" << (num + 1) << endl;
    }

    return 0;
}
