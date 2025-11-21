#include <iostream>
using namespace std;

int main()
{
    int n1;
    cout << "Enter your 1st number: ";
    cin >> n1;

    int n2;
    cout << "Enter your 2nd number: ";
    cin >> n2;
    
    char op;
    cout<<"Enter (+,-,*,/): ";
    cin>>op;
    
    switch (op)
    {
    case '+':
        cout << n1 + n2 << endl;
        break;

    case '-':
        cout << n1 - n2 << endl;
        break;

    case '*':
        cout << n1 * n2 << endl;
        break;

    case '/':
        cout << n1 / n2 << endl;
        break;

    default:
        cout << "Invitid" << endl;
    }
}