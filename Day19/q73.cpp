#include<iostream>
using namespace std;
int main()
{
    int arr1[3][3],arr2[3][3],i=0,j=0;
    cout<<"Enter array one 3x3:";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>arr1[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";
    cout<<"Enter the array two 3x3:";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>arr2[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<arr2[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"THE SUM OF THE TWO MATRICES IS:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<(arr1[i][j]+arr2[i][j])<<" ";
        }
        cout<<"\n";
    }
}