#include<iostream>
using namespace std;
int main()
{
    int n=5,i=1,j;
    while(i<=n)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<"\n";
        i++;
    }
}