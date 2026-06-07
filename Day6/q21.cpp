#include<iostream>
using namespace std;
int main()
{
    int n,x=0,i=1;
    cout<<"Enter the decimal no.";
    cin>>n;
    while(n>0)
    {
        x=x+(n%2)*i;
        i=i*10;
        n=n/2;
    }
    cout<<x;
}