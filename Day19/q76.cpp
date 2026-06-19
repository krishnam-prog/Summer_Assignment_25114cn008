#include<iostream>
using namespace std;
int main()
{
    int arr[3][3],i=0,j=0,sum=0;
    cout<<"ENTER THE ARRAY;";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                sum=sum+arr[i][j];
            }
        }
    }
    cout<<"THE SUM OF THE DIAGONAL ELEMENTS OF MATRIX:"<<sum;
}