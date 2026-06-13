#include<iostream>
using namespace std;
int main()
{
    int arr[5],i=0,even=0,odd=0;
    cout<<"ENTER THE ARRAY:"<<endl;
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<"THE ARRAY IS STORED:"<<endl;
    for(i=0;i<5;i++)
    {
        if(arr[i]%2==0)
        {
            even=even+1;
        }
        else
        {
            odd=odd+1;
        }
    }
    cout<<"THE NO. OF EVEN ELEMENTS IS:" <<even<<endl;
    cout<<"THE NO. OF ODD ELEMENTS IS:"<<odd<<endl;
}