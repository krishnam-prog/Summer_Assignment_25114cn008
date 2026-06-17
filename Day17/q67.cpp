#include<iostream>
using namespace std;
int main()
{
    int arr1[4],arr2[4],i=0,j=0,count=0,already=0,intersecarr[8];
    cout<<"Enter array1:";
    for(i=0;i<4;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter array2:";
    for(i=0;i<4;i++)
    {
        cin>>arr2[i];
    }
    int k=0;
    for(i=0;i<4;i++)
    {
        count=0;
        for(j=0;j<4;j++)
        {
            if(arr1[i]==arr2[j])
            {
                count=1;
                break;
            }
        }
        if(count==1)
        {
            already=0;
            for(j=0;j<k;j++)
            {
                if(arr1[i]==intersecarr[j])
                {
                    already=1;
                    break;
                }
            }
            if(already==0)
            {
                intersecarr[k]=arr1[i];
                k++;
            }
        }
    }
    cout<<"THE INTERSECTION OF THESE ARRAYS IS: ";
    for(i=0;i<k;i++)
    {
        cout<<intersecarr[i]<<" ";
    }
}