#include<iostream>
using namespace std;
int main()
{
    char text[100],ans[100];
    cout<<"Enter the text;";
    cin>>text;
    int i=0,j=0,k=0,length=0,count=0;
    for(i=0;text[i]!=0;i++)
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
                ans[k]=text[j];
                k++;
                count++;
            }
        }
        cout<<ans[i]<<count;
    }
}