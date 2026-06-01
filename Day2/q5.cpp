#include<iostream>
using namespace std;
int main()
{
    int number,x=0,j;
    cout<<"Enter the number of which the sum of digit is required:";
    cin>>number;
    while(number>0)
    {
        j=number%10;
        x=x+j;
        number=number/10;
    }
    cout<<x;
}