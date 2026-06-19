#include<iostream>
using namespace std;
int main()
{
    int arr[3][3],i=0,j=0;
    cout<<"Enter the array:";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"\n";
    cout<<"THE ARRAY IS:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"THE TRANSPOSE OF MATRIX IS:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<"\n";
    }
}