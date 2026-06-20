#include<iostream>
using namespace std;
int main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int i=0,j=0,sum=0;
    for(i=0;i<3;i++)
    {
        sum=0;
        for(j=0;j<3;j++)
        {
            sum=sum+arr[i][j];
        }
        cout<<"THE SUM OF "<<i<<" ROW>>"<<sum;
        cout<<"\n";
    }
}