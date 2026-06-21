#include<iostream>
using namespace std;
int main()
{
    char name[30];
    cout<<"ENTER THE ARRAY:";
    cin>>name;
    int i=0,count=0;
    for(i=0;name[i]!='\0';i++)
    {
        count++;
    }
    int start=0;
    int end=count-1;
    while(start<end)
    {
        swap(name[start],name[end]);
        start++;
        end--;
    }
    for(i=0;name[i]!=0;i++)
    {
        cout<<name[i];
    }
}