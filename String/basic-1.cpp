#include <iostream>

using namespace std;
int manin()
{
    char name[100];

    cout << "Enter your name: ";
    gets(name);

    cout << "Welcome" << name;

    return 0;
}