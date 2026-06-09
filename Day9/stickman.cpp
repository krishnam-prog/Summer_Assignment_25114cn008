#include<iostream>
using namespace std;
int main()
{
    int n=7,i,j=1;
    while(j<=2)
    {
        for(i=1;i<=n;i++)
        {
            if(i==4)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
        j++;
    }
    n=7,i=1,j=1;
    for(i=1;i<=7;i++)
    {
        if(i==2||i==3)
        {
            cout<<"*";
        }
        if(i==4)
        {
            cout<<"*";
        }
        else
        {
            cout<<" ";
        }
    }
    cout<<"\n";
    n=7,i=1,j=1;
    for(i=1;i<=7;i++)
    {
        if(i==1||i==3)
        {
            cout<<"*";
        }
        if(i==5)
        {
            cout<<"*";
        }
        else
        {
            cout<<" ";
        }
    }
    cout<<"\n";
    n=7,i=1,j=1;
    while(j<=2)
    {
        for(i=1;i<=n;i++)
        {
            if(i==4)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
        j++;
    }
    n=7,i=1,j=1;
    for(i=1;i<=n;i++)
    {
        if(i==3||i==5)
        {
            cout<<"*";
        }
        else
        {
            cout<<" ";
        }
    }
    cout<<"\n";
    n=7,i=1,j=1;
    for(i=1;i<=n;i++)
    {
        if(i==2||i==6)
        {
            cout<<"*";
        }
        else
        {
            cout<<" ";
        }
    }
    cout<<"\n";
    cout<<"HEY";
    cout<<"\n";
    cout<<"<<<THE NAME'S STICKMAN,REMEMBER IT>>>";
}