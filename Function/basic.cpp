#include <iostream>
using namespace std;

void addition(int a, int b);

int main()
{
    addition(10, 20);
}

void addition(int a, int b)
{
    int sum = a + b;
    cout << sum << endl;
}