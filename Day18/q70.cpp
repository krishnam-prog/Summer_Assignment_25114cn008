#include<iostream>
using namespace std;
int main()
{
    int arr[5],i=0,j=0,minindex=0;
    cout<<"Enter the array;";
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<5;i++)
    {
        minindex=i;
        for(j=i+1;j<5;j++)
        {
            if(arr[j]<arr[minindex])
            {
                minindex=j;
            }
        }
        swap(arr[minindex],arr[i]);
    }
    for(i=0;i<5;i++)
    {
        cout<<arr[i];
    }
}