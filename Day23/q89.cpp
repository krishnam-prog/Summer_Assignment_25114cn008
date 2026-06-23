#include<iostream>
using namespace std;
int main()
{
    char text[1000],ch=0;
    cout<<"ENTER THE TEXT:";
    cin>>text;
    int i=0,length=0,j=0,count=0,ans[1000];
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
            }
        }
        ans[i]=count;
        if(ans[i]==1)
        {
            cout<<"THE FIRST NON REPEATING CHARACTER IS:"<<text[i];
            break;
        }
    }
}