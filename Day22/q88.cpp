#include<iostream>
using namespace std;
int main()
{
    char text[10000],ans[1000];
    cout<<"ENTER THE TEXT:";
    cin.getline(text,10000);
    int i=0,j=0;
    for(i=0;text[i]!='\0';i++)
    {
        if(text[i]==' ')
        {
            continue;
        }
        else
        {
            ans[j]=text[i];
            j++;
        }
    }
    for(i=0;ans[i]!='\0';i++)
    {
        cout<<ans[i];
    }
}