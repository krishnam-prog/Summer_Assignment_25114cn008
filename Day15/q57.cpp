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
    int start=0,end=4;
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    cout<<"The reversed array is:";
    for(i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}