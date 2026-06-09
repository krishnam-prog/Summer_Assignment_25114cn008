#include<iostream>
using namespace std;
int main()
{
    int n=1,i=7,j=1;
    while(i>=n)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
        i--;
    }
}