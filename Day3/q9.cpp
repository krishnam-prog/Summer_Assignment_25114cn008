#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter the no. to be checked";
    cin>>n;
    if(n==1)
    {
        cout<<"The no. is prime";
    }
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"The no. is prime";
        }
        else
        {
            cout<<"The no. is not prime";
        }
    }
}