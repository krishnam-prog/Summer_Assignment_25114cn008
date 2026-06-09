#include<iostream>
using namespace std;
int main()
{
    char ch='A',i='E',j;
    while(ch<=i)
    {
        for(j='A';j<=ch;j++)
        {
            cout<<ch;
        }
        cout<<"\n";
        ch++;
    }
}