#include<iostream>
using namespace std;
int main()
{
    char text[100],ans[100];
    cout<<"ENTER THE TEXT:";
    cin>>text;
    int i=0,j=0,k=0,x=0,length=0,count=0,max=0,index=0,sum[100];
    for(i=0;text[i]!='\0';i++)
    {
        length++;
    }
    for(i=0;i<length;i++)
    {
        count=0;
        for(j=0;j<length;j++)
        {
            if(text[i]==text[j])
            {
                count++;
                ans[k]=text[j];
                k++;
            }
        }
        sum[i]=count;
    }
    for(i=0;i<length;i++)
    {
        if(sum[i]>max)
        {
            max=sum[i];
            index=i;
        }
    }
    cout<<"THE MOST REPEATED CHARACTER IS:"<<ans[index];
}