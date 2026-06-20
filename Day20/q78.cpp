#include<iostream>
using namespace std;
int main()
{
    int arr[3][3],i=0,j=0,tarr[3][3],decision=1;
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
            (tarr[i][j]=arr[j][i]);
        }
        cout<<"\n";
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<tarr[i][j]<<" ";
        }
        cout<<"\n";
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(arr[i][j]!=tarr[i][j])
            {
                decision=0;
            }
        }
    }
    if(decision==1)
    {
        cout<<"yes it is symmetric;";
    }
    else
    {
        cout<<"no it is not symmetric;";
    }
}