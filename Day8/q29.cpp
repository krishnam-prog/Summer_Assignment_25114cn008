#include<iostream>
using namespace std;
int main()
{
    int i=1,j;
    while(i<=7)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
        i++;
    }
}