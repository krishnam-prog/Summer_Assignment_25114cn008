#include<iostream>
using namespace std;
int main()
{
    int number,x=1,j;
    cout<<"Enter the number of which the product of the digit is required:";
    cin>>number;
    while(number>0)
    {
        j=number%10;
        x=x*j;
        number=number/10;
    }
    cout<<x;
}