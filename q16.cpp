#include<iostream>
using namespace std;
int main()
{
    int n,i,num,digit,sum,count=0;
    cout<<"Enter a number: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        num=i;
        sum=0;
        while(num>0)
        {
            digit=num%10;
            sum=sum+digit*digit*digit;
            num=num/10;
        }
        if(sum==i)
        {
            cout<<i<<" ";
            count++;
        }
    }
    if(count==0)
    {
        cout<<"None exists";
    }
    return 0;
}