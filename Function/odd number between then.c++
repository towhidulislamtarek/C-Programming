#include <iostream>
using namespace std;

bool isOdd(int num)
{
    return num % 2 != 0;
}

int main()
{
    int a = 1;
    int b = 10;

    for (int i = a; i <= b; i++)
    {
        if (isOdd(i))
        {
            cout << i << " ";
        }
    }

    return 0;
}
