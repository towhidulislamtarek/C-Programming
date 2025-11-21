#include <iostream>
#include <string>
using namespace std;

void fun()
{
    int x = 10;
    int y, z;

    for (y = 0; y < 5; y++)
    {
        x = x + y;
        z = x * x;
    }

    cout << x << " " << y << " " << z << endl;
}

int main()
{
    string name;
    name = "Sarthak";
    cout << name << endl;

    fun();
    return 0;
}
