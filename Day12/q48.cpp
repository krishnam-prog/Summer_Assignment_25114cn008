#include<iostream>
using namespace std;
void perfectnum(int n)
{
    int i=1,sum=0;
    while(i<n)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
        i++;
    }
    if(sum==n)
    {
        cout<<"YES IT IS A PERFECT NO.";
    }
    else
    {
        cout<<"NO IT IS NOT A PERFECT NO.";
    }
}
int main()
{
    int num;
    cout<<"Enter the number to check;";
    cin>>num;
    perfectnum(num);
}