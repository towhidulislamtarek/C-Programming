#include <iostream>
using namespace std;

int square(int x)
{
    return x * x;
}

double circumference(int r)
{
    return 2 * 3.1416 * r;
}

double area(int r)
{
    return 3.1416 * square(r);
}

int main()
{
    int r = 3;
    cout << "Area: " << area(r) << endl;
    cout << "Circumference: " << circumference(r) << endl;
    return 0;
}
