#include<iostream>
using namespace std;
int prime(int num)
{
    int i=2,x=0;
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            x=1;
            break;
        }
        else
        {
            x=0;
        }
    }
    if(x==1)
    {
        cout<<"NOT PRIME";
    }
    else
    {
        cout<<"YES PRIME";
    }
}
int main()
{
    int n;
    cout<<"Enter the no. you want to check:";
    cin>>n;
    prime(n);
}