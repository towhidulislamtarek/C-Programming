#include <iostream>
using namespace std;

int main()
{
    double farn;
    double celsius;

    cout << "Enter this celsius: ";
    cin >> celsius;

    farn = 1.0 * celsius + 32;

    cout << "The Temoerature converter is : " << farn;

    return 0;
}