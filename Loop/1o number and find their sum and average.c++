#include <iostream>
using namespace std;

int main()
{
    int num;
    int sum = 0;
    float avg;

    cout << "The number of 10 is: " << endl;

    for (int i = 1; i <= 10; i++)
    {
        cout << "Number " << i<<": ";
        cin >> num;
        sum = sum + num;
    }

    avg = sum / 10;
    cout << "The number of 10 is: " << sum << endl;
    cout << "The average of 10 is: " << avg << endl;
}