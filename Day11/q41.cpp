#include<iostream>
using namespace std;
int add(int a,int b)
{
    return a+b;
}
int main()
{
    int x,y;
    cout<<"Enter the value of x:";
    cin>>x;
    cout<<"Enter the value of y;";
    cin>>y;
    cout<<"The Sum is given as:"<<add(x,y);
}