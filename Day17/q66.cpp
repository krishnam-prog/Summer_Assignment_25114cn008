#include <iostream>
using namespace std;
int main()
{
    int arr1[4],arr2[4],i=0,j=0,count=0,already=0,unionarr[8];
    cout<<"Enter the array1:";
    for(i=0;i<4;i++)
    {
        cin>>arr1[i];
    }
    cout<<"\nEnter the array2:";
    for(i=0;i<4;i++)
    {
        cin>>arr2[i];
    }
    int finalarr[8],k=0;
    for(i=0;i<4;i++)
    {
        finalarr[i]=arr1[i];
    }
    for(i=0;i<4;i++)
    {
        finalarr[i+4]=arr2[i];
    }
    for(i=0;i<8;i++)
    {
        already=0;
        for(j=0;j<i;j++)
        {
            if(finalarr[i]==finalarr[j])
            {
                already=1;
                break;
            }
        }
        if(already==0)
        {
            unionarr[k]=finalarr[i];
            k++;
        }
    }
    cout<<"THE UNION OF THESE ARRAYS ARE: ";
    for(i=0;i<k;i++)
    {
        cout<<unionarr[i]<<" ";
    }
    return 0;
}