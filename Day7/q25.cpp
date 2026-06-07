#include<iostream>
using namespace std;
int factorial(int num)
{
    if(num==0)
    {
        return 1;
    }
    else
    {
        return num*factorial(num-1);
    }
}
int main()
{
    int n,x;
    cout<<"Enter The number;";
    cin>>n;
    x=factorial(n);
    cout<<"The Factorial is:"<<x;
}