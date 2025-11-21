#include <iostream>
using namespace std;

int main()
{

    int mark;
    cout << "Enter this mark: ";
    cin >> mark;

    if (mark >= 81 and mark <= 100)
    {
        cout << mark << " is a Very good number." << endl;
    }

    else if (mark >= 61 and mark <= 80)
    {
        cout << mark << " is a Good number." << endl;
    }

    else if (mark >= 41 and mark <= 60)
    {
        cout << mark << " is a Average number." << endl;
    }
    else
    {
        cout << mark << " is fall" << endl;
    }
}