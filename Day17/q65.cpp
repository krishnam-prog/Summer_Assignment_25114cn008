#include <iostream>
using namespace std;
int main()
{
    int arr1[5],arr2[3],i=0;
    cout<<"Enter the array1;";
    for(i=0;i<5;i++)
    {
        cin>>arr1[i];
    }
    cout<<"\n";
    cout<<"Enter the array2;";
    for(i=0;i<3;i++)
    {
        cin>>arr2[i];
    }
    i=0;
    int finalarr[8],k=0;
    for (i=0;i<5;i++)
    {
        finalarr[i]=arr1[i];
    }
    for(i=0;i<3;i++)
    {
        finalarr[i+5]=arr2[i];
    }
    for(i=0;i<8;i++)
    {
        cout<<finalarr[i];
    }
}