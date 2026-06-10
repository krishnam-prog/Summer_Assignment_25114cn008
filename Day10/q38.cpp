#include<iostream>
using namespace std;
int main()
{
    int n=5,i=1,j=0;
    while(n>=i)
    {
        for(j=0;j<=(5-n);j++)
        {
            cout<<" ";
        }
        for(j=1;j<=(2*n)-1;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
        n--;
    }
}