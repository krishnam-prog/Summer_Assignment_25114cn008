#include<iostream>
using namespace std;
int sumd(int num)
{
    int rem=0,i;
    if(num==0)
    {
        return 0;
    }
    rem=num%10;
    i=num/10;
    return rem+sumd(i);
}
int main()
{
    int n;
    cout<<"Enter the number value;";
    cin>>n;
    cout<<"The sum is:"<<sumd(n);
}