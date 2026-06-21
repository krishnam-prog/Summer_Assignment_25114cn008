#include<iostream>
using namespace std;
int main()
{
    char ch=0,chr=0,changech=0;
    cout<<"ENTER THE CHARACTER:";
    cin>>ch;
    while(ch>='a' && ch<='z')
    {
        changech=ch-32;
        cout<<changech;
        break;
    }
}