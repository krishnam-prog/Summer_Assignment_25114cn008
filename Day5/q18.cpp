#include<iostream>
using namespace std;
int main()
{
    int n,i,x,fac=1,fno=0,original;
    cout<<"Enter the no:";
    cin>>n;
    original=n;
    while(n>0)
    {
        x=n%10;
        n=n/10;
        cout<<"\n";
        cout<<x;
        for(i=1;i<=x;i++)
        {
            fac=fac*i;
        }
        cout<<"\n";
        cout<<"factorial of:"<<x<<":is:"<<fac;
        fno=fno+fac;
        fac=1;
    }
    cout<<"\n";
    cout<<"sum of (factorial of each digits):"<<fno;
    cout<<"\n";
    if(fno==original)
    {
        cout<<"Yes it is a strong no.";
    }
    else
    {
        cout<<"No it is not a strong no.";
    }
}