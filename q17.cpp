#include<iostream>
using namespace std;
int main()
{
    int n,i,fac=0;
    cout<<"Enter the number to check for perfect no.:";
    cin>>n;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<i;
            fac=fac+i;
        }
        cout<<"\n";
    }
    cout<<fac;
    if(fac==n)
    {
        cout<<"Yes it is perfect no.";
    }
    else
    {
        cout<<"No it is not a perfect no:";
    }
}