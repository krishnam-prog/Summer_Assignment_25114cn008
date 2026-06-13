#include<iostream>
using namespace std;
int main()
{
    int arr[5],i=0,maximum=0,minimum=0;
    cout<<"ENTER THE ARRAY:";
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    maximum=arr[0];
    minimum=arr[0];
    cout<<"THE ARRAY IS SUCCESSFUllY STORED:"<<endl;
    i=0;
    while(i<5)
    {
        if(arr[i]>maximum)
        {
            maximum=arr[i];
        }
        if(arr[i]<minimum)
        {
            minimum=arr[i];
        }
        i++;
    }
    cout<<"THE LARGEST ELEMENT IS:"<<maximum<<endl;
    cout<<"THE SMALLEST ELEMENT IS:"<<minimum;
}