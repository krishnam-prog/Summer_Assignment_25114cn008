#include<iostream>
using namespace std;
void fibonacci(int n)
{
    int i=1,first=0,second=1,sum=0;
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            cout<<first;
        }
        cout<<" ";
        if(i==1)
        {
            cout<<second;
            cout<<" ";
        }
        else
        {
            sum=first+second;
            cout<<sum;
            cout<<" ";
            first=second;
            second=sum;
        }
    }
}
int main()
{
    int num;
    cout<<"Enter the no. till which the fib. is required:";
    cin>>num;
    fibonacci(num);
}