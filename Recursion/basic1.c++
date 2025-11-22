#include <iostream>
using namespace std;

void greet()
{
    cout << "Hay" << endl;
    greet();
}
int main()
{
    greet();
}