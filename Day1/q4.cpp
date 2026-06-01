#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cout<<"Enter the number of which the digit has to be counted:";
    cin>>n;
    while(n!=0)
    {
        n=n/10;
        count=count+1;
    }
    cout<<"The no. of digits present in the given number are:"<<count;
}