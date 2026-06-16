#include<iostream>
using namespace std;
int main()
{
    int arr[5],newarr[5],k=0;
    for(int i=0;i<5;i++)
        cin>>arr[i];
    for(int i=0;i<5;i++)
    {
        int j;
        for(j=0;j<k;j++)
        {
            if(arr[i]==newarr[j])
                break;
        }
        if(j==k)
        {
            newarr[k]=arr[i];
            k++;
        }
    }
    for(int i=0;i<k;i++)
    {
        cout<<newarr[i]<<" ";
    }
}