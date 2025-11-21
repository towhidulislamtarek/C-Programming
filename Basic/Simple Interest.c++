#include <iostream>
using namespace std;

int main()
{
    float p = 1000;
    float r = 30;
    float t = 3;
    float interest = 0;

    interest = (p * r * t) / 100;

    cout << "The simple interest: " << interest;
}