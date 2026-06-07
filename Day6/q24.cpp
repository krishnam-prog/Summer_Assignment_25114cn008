#include<iostream>
using namespace std;
int main()
{
    int n,x=1,y;
    int i=0;
    cout<<"Enter the Value of y:";
    cin>>y;
    cout<<"Enter the power:";
    cin>>n;
    while(i<n)
    {
        x=x*y;
        i++;
    }
    cout<<x;
}