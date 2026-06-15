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
    for(i=0;i<=3;i++)
    {
        swap(arr[i],arr[i+1]);
    }
    cout<<"The left rotated array is;";
    for(i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}