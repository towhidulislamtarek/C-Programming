#include <iostream>
using namespace std;

class student
{
public:
    int id;
    double gpa;
};

int main()
{
    student Alim;

    Alim.id = 252;
    Alim.gpa = 3322;

    cout << "Alim id" << Alim.id << endl;
    cout << "Alim gpa" << Alim.gpa;
}