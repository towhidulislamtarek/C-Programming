#include <iostream>
using namespace std;

int main()
{
    int angal_1;
    cout << "Enter Angal number: ";
    cin >> angal_1;

    int angal_2;
    cout << "Enter Angal number: ";
    cin >> angal_2;

    int angal_3;
    cout << "Enter Angal number: ";
    cin >> angal_3;

    int sum = 0;
    sum = (angal_1 + angal_2 + angal_3);

    if (sum == 180 and angal_1 > 0 and angal_2 > 0 and angal_3 > 0)
    {
        cout << "Valid" << endl;
    }

    else
    {
        cout << "Not vaild" << endl;
    }
}