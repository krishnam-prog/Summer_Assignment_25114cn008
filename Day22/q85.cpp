#include<iostream>
using namespace std;
int main()
{
    char name[30],palindrome[30],original[30];
    cout<<"ENTER THE NAME;";
    cin>>name;
    int i=0;
    for(i=0;name[i]!='\0';i++)
    {
        original[i]=name[i];
    }
    int count=0;
    for(i=0;name[i]!='\0';i++)
    {
        count++;
    }
    cout<<count<<endl;
    int start=0;
    int end=count-1;
    while(start<=end)
    {
        swap(name[start],name[end]);
        start++;
        end--;
    }
    int decision=0;
    for(i=0;i<count;i++)
    {
       if(original[i]==name[i])
       {
           decision=1;
       }
       else
       {
           decision=0;
       }
       cout<<decision<<endl;
    }
    if(decision==1)
    {
        cout<<"YES IT IS A PALINDROME:";
    }
    else
    {
        cout<<"NO IT IS NOT PALINDROME:";
    }
}