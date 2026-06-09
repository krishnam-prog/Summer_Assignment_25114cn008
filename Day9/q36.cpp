#include<iostream>
using namespace std;
int main()
{
    int n=7,i=1,j=1;
    while(i<=n)
    {
        cout<<"*";
        i++;
    }
    cout<<"\n";
    i=1;
    while(j<=3)
    {
        for(i=1;i<=n;i++)
        {
            if(i==1||i==7)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
        j++;
    }
    i=1,j=1,n=7;
    for(i=1;i<=n;i++)
    {
        cout<<"*";
    }
}