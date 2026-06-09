#include<iostream>
using namespace std;
int main()
{
    int n=1,i=5,j;
    while(i>=n)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<"\n";
        i--;
    }
}