#include <iostream>
using namespace std;

int main()
{
    int cp;
    cout << "Enter this cost price: ";
    cin >> cp;

    int sp;
    cout << "Enter this selling price: ";
    cin >> sp;

    if (sp > cp)
    {
        cout << "This product is profit: "<<sp-cp;
    }

    else if (cp > sp)
    {
        cout << "This product is loss: "<<cp-sp;
    }

    else
    {
        cout << "No loss no profit";
    }

    return 0;
}