#include<iostream>
using namespace std;
int main()
{
    int n,i=2,x=0;
    cout<<"Enter the value of n;";
    cin>>n;
    while(i<n)
    {
        if(n%i==0)
        {
            x=1;
            break;
        }
        else
        {
            x=0;
        }
        i++;
    }
    if(x==1)
    {
        cout<<"NOT a prime no.;";
    }
    else
    {
        cout<<"YES it is a prime no.;";
    }
}