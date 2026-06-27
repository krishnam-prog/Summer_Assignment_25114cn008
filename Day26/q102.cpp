#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"ENTER THE AGE:";
    cin>>age;
    if(age==0 || age>=120)
    {
        cout<<"INVALID AGE:";
        return 0;
    }
    if(age>=18)
    {
        cout<<"YES YOU ARE ELIGIBLE FOR VOTE;";
    }
    else
    {
        cout<<"NO YOU ARE NOT ELIGIBLE FOR VOTE;";
    }
}