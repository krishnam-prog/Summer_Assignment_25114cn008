#include<iostream>
using namespace std;
int main()
{
    int n,i,x,first=0,second=1,temp;
    cout<<"Enter the nth term to be find:";
    cin>>n;
    cout<<first;
    cout<<"\n";
    for(i=1;i<=n;i++)
    {
        temp=first+second;
        first=second;
        second=temp;
        cout<<temp;
        cout<<"\n";
    }
    cout<<"Nth fib term is:"<<second;
}