#include <iostream>
using namespace std;

int main()
{
    int r;
    int c;
    int i, j;

    cout << "Enter this row size: ";
    cin >> r;

    cout << "Enter this colum size: ";
    cin >> c;

    int arr[r][c];

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << "Enter this element :";
            cin >> arr[r][c];
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << arr[r][c];
        }
    }

    return 0;
}