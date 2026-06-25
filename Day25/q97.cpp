#include<iostream>
using namespace std;
int main()
{
    int a[]={1,4,7,9};
    int b[]={2,3,5,8};
    int c[100];
    int n1=4,n2=4,i,j,k=0,size;
    for(i=0;i<n1;i++)
        c[k++]=a[i];
    for(i=0;i<n2;i++)
        c[k++]=b[i];
    size=n1+n2;
    for(i=1;i<size;i++)
    {
        for(j=0;j<size-i;j++)
        {
            if(c[j]>c[j+1])
                swap(c[j],c[j+1]);
        }
    }
    for(i=0;i<size;i++)
        cout<<c[i]<<" ";
}