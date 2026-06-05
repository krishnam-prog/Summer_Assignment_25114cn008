#include<iostream>
using namespace std;
int main()
{
    int n,i=1,j=0;
    cout<<"Enter the no. till which the sum is required;";
    cin>> n;
    for(i=1;i<=n;i++)
    {
        j=j+i;
    }
    cout<<"The sum up to the given no. is:"<<j;
}