#include<iostream>
using namespace std;
int factorial(int n)
{
    int i=1,x=1;
    for(i=1;i<=n;i++)
    {
        x=x*i;
    }
    cout<<x;
}
int main()
{
    int num;
    cout<<"Enter the number:";
    cin>>num;
    cout<<"The factorial is:";
    factorial(num);
}