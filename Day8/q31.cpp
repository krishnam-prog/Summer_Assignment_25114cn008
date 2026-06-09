#include<iostream>
using namespace std;
int main()
{
    char ch='A',chr;
    while(ch<='E')
    {
        for(chr='A';chr<=ch;chr++)
        {
            cout<<chr;
        }
        cout<<"\n";
        ch++;
    }
}