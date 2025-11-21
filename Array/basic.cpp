#include<iostream>
using namespace std;
int main()
{
  int mark[100];
  int size;

  cout<<"Enter this integers size : ";
  cin>>size;

  for(int i=0;i<size;i++)
  {
    cout<<"Enter this element: ";
    cin>>mark[i];
  }

  for(int i=0;i<size;i++)
  {
    cout<<"The number is : "<<mark[i]<<endl;
  }
}