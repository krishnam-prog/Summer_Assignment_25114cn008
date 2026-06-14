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
    int max=arr[0];
    for(i=0;i<5;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    int diff=0,diffarr[5],compare[5];
    for(i=0;i<5;i++)
    {
        diff=max-arr[i];
        diffarr[i]=diff;
        compare[i]=max-diff;
    }
    int min=diffarr[0],secondlargest=0;
    for(i=0;i<5;i++)
    {
        if(diffarr[i]==0)
        {
            continue;
        }
        if(diffarr[i]<min)
        {
            min=diffarr[i];
            secondlargest=compare[i];
        }
    }
    cout<<"The second largest element is:"<<secondlargest;
}