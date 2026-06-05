#include<iostream>
using namespace std;
int main()
{
    int n,i,x;
    cout<<"Enter the no. of which the table is required:";
    cin>> n;
    for(i=1;i<=10;i++)
    {
        x=n*i;
        cout<<x;
        cout<<"\n";
    }
}