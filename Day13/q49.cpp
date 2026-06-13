#include<iostream>
using namespace std;
int main()
{
    int arr[5],i=0;
    cout<<"ENTER THE ARRAY (5 ELEMENTS):";
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<"THE ARRAY IS SUCCESSFULLY STORED"<<endl;
    cout<<"THE OUTPUT:";
    for(i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}