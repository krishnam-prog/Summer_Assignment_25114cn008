#include<iostream>
using namespace std;
int main()
{
    int a,b,i,j,x,y;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    for(i=1;i<=b;i++)
    {
        x=a*i;
        for(j=1;j<=a;j++)
        {
            y=b*j;
            if(x==y)
            {
                cout<<"LCM="<<x;
                return 0;
            }
        }
    }
}