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
    i=4;
    while(i>=1)
    {
        swap(arr[i],arr[i-1]);
        i--;
    }
    cout<<"The Right rotated array is:";
    for(i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}