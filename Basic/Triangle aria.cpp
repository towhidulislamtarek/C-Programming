#include <iostream>
using namespace std;

int main()
{
    double base;
    double height;
    double area;

    cout << "Enter this base: ";
    cin >> base;

    cout << "Enter this height: ";
    cin >> height;

    area = 0.5 * base * height;

    cout << "The Triangle aria is: " << area;

    return 0;
}