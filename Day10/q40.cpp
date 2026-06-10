#include<iostream>
using namespace std;
int main()
{
    char ch='J',i='A',j='A';
    for(i='A';i<=ch;i++)
    {
        for(j='A';j<=(ch-1);j++)
        {
            cout<<" ";
        }
        for(j='A';j<=i;j++)
        {
            cout<<j;
        }
        for(j=(i-1);j>='A';j--)
        {
            cout<<j;
        }
        cout<<"\n";
        ch--;
    }
}