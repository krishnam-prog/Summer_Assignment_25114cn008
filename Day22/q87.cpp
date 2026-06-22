#include<iostream>
using namespace std;
int main()
{
    char para[100000];
    int i=0,count=0;
    cout<<"ENTER TEXT:";
    cin>>para;
    for(i=0;para[i]!=0;i++)
    {
        count=0;
        for(int j=0;j<para[j]!='\0';j++)
        {
            if(para[i]==para[j])
            {
                count++;
            }
        }
        cout<<"THE frequency of the word: "<<para[i]<<" is>>"<<count<<endl;
    }
}