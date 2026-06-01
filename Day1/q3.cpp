#include<iostream>
using namespace std;
int main()
{
    int n,j=1;
    cout<<"Enter the no. of which factorial is required:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        j=j*i;
    }
    cout<<"The factorial is :"<<j;
}