#include<iostream>
using namespace std;
int lengthstr(char name1[])
{
    int i=0,count=0;
    for(i=0;name1[i]!='\0';i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[100];
    int len=0;
    cout<<"ENTER THE NAME:";
    cin>>name;
    len=lengthstr(name);
    cout<<len;
}