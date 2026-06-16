#include<iostream>
using namespace std;
int main()
{
    int arr[5],i=0,j=0,sum=0;
    cout<<"Enter the array;"<<endl;
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the sum:";
    cin>>sum;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<7;j++)
        {
            if(arr[i]+arr[j]==sum)
            {
                cout<<"Pair found"<<endl;
                cout<<"The pair is:"<<arr[i]<<","<<arr[j];
            }
        }
    }
}