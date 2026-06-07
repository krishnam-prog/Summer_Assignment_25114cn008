#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter the no whose factors has to be calculated:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<"The factors of the number is:"<<i;
            cout<<"\n";
        }
    } 
}