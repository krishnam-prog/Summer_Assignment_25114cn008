#include<iostream>
using namespace std;
int main()
{
    int n,temp,digit,sum=0;
    cout<<"Enter a number: ";
    cin>>n;
    temp=n;
    while(n>0)
    {
        digit=n%10;
        sum=sum+digit*digit*digit;
        n=n/10;
    }
    if(sum==temp)
        cout<<"Yes! Armstrong Number";
    else
        cout<<"Not an Armstrong Number";
}