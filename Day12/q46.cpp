#include<iostream>
#include<cmath>
using namespace std;
int armstrong(int n)
{
    int count=0,original=n,initial=n;
    float lastdigit=0,sum=0,digpower=0;
    while(n>0)
    {
        lastdigit=n%10;
        n=n/10;
        count=count+1;
    }
    while(original>0)
    {
        lastdigit=original%10;
        digpower=pow(lastdigit,count);
        sum=sum+digpower;
        original=original/10;
    }
    if(initial==sum)
    {
        cout<<"YES IT IS A ARMSTRONG NO:";
    }
    else
    {
        cout<<"NO IT IS NOT A ARMSTRONG NO.";
    }
}
int main()
{
    double num;
    cout<<"Enter the no.";
    cin>>num;
    cout<<"THE RESULT OF GIVEN NO. IS>>";
    armstrong(num);
}