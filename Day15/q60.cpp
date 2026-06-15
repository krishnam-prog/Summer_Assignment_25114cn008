#include<iostream>
using namespace std;
int main()
{
    int arr[5],i=0;
    cout<<"Enter the array:";
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    int j=0;
    for(i=0;i<5;i++)
    {
        if(arr[i]==0)
        {
            for(j=i;j<4;j++)
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<"The array which has zeroes in end is:";
    for(i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}