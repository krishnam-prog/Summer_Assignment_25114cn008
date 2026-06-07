#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,i,x,count=0,ld,w=0,z,r=0,original;
    cout<<"Enter the number to be converted;";
    cin>>n;
    original=n;
    while(n>0)
    {
        x=n%10;
        n=n/10;
        count=count+1;
    }
    cout<<"The total no. of digits present in the no. is:"<<count;
    cout<<"\n";
    while(original>0)
    {
        ld=original%10;
        original=original/10;
        z=pow(2,count-1);
        r=ld*z;
        w=w+r;
        count--;
    }
    cout<<"The Converted binary digit is:"<<w;
}