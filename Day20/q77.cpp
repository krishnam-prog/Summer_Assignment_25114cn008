#include<iostream>
using namespace std;
int main()
{
    int arr1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int arr2[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int ans[3][3];
    int i=0,j=0,sum=0,k=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            ans[i][j]=0;
            for(k=0;k<3;k++)
            {
                ans[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
    cout<<"THE MULTIPLIED MATRIX IS:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
}