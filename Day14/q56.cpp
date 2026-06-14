#include<iostream>
using namespace std;
int main()
{
    int arr[5],i=0,j=0;
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    i=0;
    while(i<5)
    {
        for(j=i+1;j<5;j++)
        {
            if(arr[i]==arr[j])
            {
                cout<<"The Duplicate value is:"<<arr[j];
            }
        }
        i++;
    }
}