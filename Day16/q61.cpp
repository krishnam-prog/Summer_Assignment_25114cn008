#include<iostream>
using namespace std;
int main()
{
    int arr[7],i=0,sum=0,missingnum=0,actualsumof7numbers=0;
    cout<<"Enter the array";
    actualsumof7numbers=36;
    for(i=0;i<7;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<7;i++)
    {
        sum=sum+arr[i];
    }
    missingnum=36-sum;
    cout<<"The missing number is:"<<missingnum;
}