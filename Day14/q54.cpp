#include<iostream>
using namespace std;
int main()
{
    int arr[7],i=0,n,count=0;
    cout<<"Enter the array:"<<endl;
    for(i=0;i<7;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the no. to checck frequency:"<<endl;
    cin>>n;
    for(i=0;i<7;i++)
    {
        if(n==arr[i])
        {
            count=count+1;
        }
    }
    cout<<"The frequency of the no.:"<<count;
}