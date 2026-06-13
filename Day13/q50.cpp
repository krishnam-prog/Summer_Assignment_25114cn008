#include<iostream>
using namespace std;
int main()
{
    int arr[5],i=0;
    float sum=0;
    cout<<"ENTER THE ARRAY (5 ELEMENTS):";
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<5;i++)
    {
        sum=sum+arr[i];
    }
    cout<<"THE SUM OF THE ELEMENTS OF THE ARRAY IS:"<<sum<<endl;
    cout<<"THE AVERAGE OF THE ELEMENTS OF THE ARRAY IS:"<<(sum/5);
}