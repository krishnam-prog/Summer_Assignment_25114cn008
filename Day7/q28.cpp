#include<iostream>
using namespace std;
int reverse( int num,int count)
{
    if(num==0)
    {
        return 0;
    }
    int ld,place=1,sum=0,corigin=0;
    ld=num%10;
    corigin=count;
    while(count>0)
    {
        place=place*10;
        count--;
    }
    sum=sum+ld*place;
    return sum+reverse(num/10,corigin-1);
}
int main()
{
    int n,c=0,original=0;
    cout<<"Enter the no. to be reversed:";
    cin>>n;
    original=n;
    while(n>0)
    {
        n=n/10;
        c=c+1;
    }
    cout<<"The Reversed no. is:"<<reverse(original,c-1);
}