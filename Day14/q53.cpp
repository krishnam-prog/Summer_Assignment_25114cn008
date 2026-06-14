#include<iostream>
using namespace std;
int main()
{
    int arr[7],i=0,element=0;
    cout<<"Enter the array:"<<endl;
    for(i=0;i<7;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched:";
    cin>>element;
    for(i=0;i<7;i++)
    {
        if(element==arr[i])
        {
            cout<<"ELEMENT FOUND:"<<endl;
            break;
        }
    }
}