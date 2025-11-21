#include <iostream>
using namespace std;

int main()
{
    int physic;
    cout << "Enter your physic mark: ";
    cin >> physic;

    int chamstry;
    cout << "Enter your chamstry mark: ";
    cin >> chamstry;

    int biology;
    cout << "Enter your biology mark: ";
    cin >> biology;

    int mathmatics;
    cout << "Enter your mathmatics mark: ";
    cin >> mathmatics;

    int computer;
    cout << "Enter your computer mark: ";
    cin >> computer;

    int all_mark = (physic + chamstry + biology + mathmatics + computer) / 5.0;

    cout << "All mark is: " << all_mark << endl;

    if (all_mark >= 80)
    {
        cout << "Grade A+" << endl;
    }

    else if (all_mark >= 70)
    {
        cout << "Grade A" << endl;
    }

    else if (all_mark >= 60)
    {
        cout << "Grade A-" << endl;
    }

    else if (all_mark >= 50)
    {
        cout << "Grade B" << endl;
    }

    else if (all_mark >= 40)
    {
        cout << "Grade C" << endl;
    }

    else if (all_mark < 40)
    {
        cout << "Fall" << endl;
    }
}