#include<iostream>
using namespace std;
int main()
{
    int n=5,i=1,j=1;
    {
        while(i<=n)
        {
            for(j=1;j<=(n-i);j++)
            {
                cout<<"x";
            }
            for(j=1;j<=((2*i)-1);j++)
            {
                cout<<"*";
            }
            cout<<"\n";
            i++;
        }
    }
}