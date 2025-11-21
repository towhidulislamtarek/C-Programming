#include<iostream>
using namespace std;

class student
{
    public:
    int admissionfee;

    student(int x)
    {
        admissionfee=x;
        cout<<admissionfee<<endl;
    }

};

int mian()
{
    student s1(1500);
    return 0;
}