#include <iostream>
using namespace std;

int main()
{
    int amount;

    int cost_price;
    cout << "Enter your cost price: ";
    cin >> cost_price;

    int selling_price;
    cout << "Enter your selling price: ";
    cin >> selling_price;

    if (selling_price > cost_price)
    {
        amount = (selling_price - cost_price);
        cout << amount << " is profit." << endl;
    }

    else if (cost_price - selling_price)
    {
        amount = (cost_price - selling_price);
        cout << amount << " is loss." << endl;
    }

    else
    {
        cout << "This is no profit and loss." << endl;
    }
}