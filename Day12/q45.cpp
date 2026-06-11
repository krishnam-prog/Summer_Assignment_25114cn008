#include<iostream>
using namespace std;
int palindrome(int n)
{
    int reverse=0,lastdigit=0,original=n;
    while(n>0)
    {
        lastdigit=n%10;
        n=n/10;
        reverse=(reverse*10)+lastdigit;
    }
    cout<<reverse;
    cout<<"\n";
    if(original==reverse)
    {
        cout<<"YES IT IS PALINDROME";
    }
    else
    {
        cout<<"NO IT IS NOT PALINDROME";
    }
}
int main()
{
    int num;
    cout<<"Enter the no.";
    cin>>num;
    cout<<"The result of given no. is:>>";
    palindrome(num);
}