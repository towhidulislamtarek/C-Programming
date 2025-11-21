#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int n;
    cout << "Enter number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << "The number is: ";
        cin >> arr[i];
    }

    cout << "The number is: " << endl;

    for (int i = 1; i <= n; i++)
    {

        cout << arr[i] << " ";
    }
}