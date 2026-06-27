#include<iostream>
using namespace std;
int main()
{
    int guessnumber=25;
    int inputnum;
    cout<<"<<HELLO USER>>"<<"\n";
    cout<<"ENTER YOUR GUESS:";
    cin>>inputnum;
    if(guessnumber==inputnum)
    {
        cout<<"YOU WON";
        return 0;
    }
    while(guessnumber!=inputnum)
    {
        if(inputnum>guessnumber)
        {
            cout<<"YOUR GUESS IS TOO HIGH;"<<"\n";
            cin>>inputnum;
        }
        else if(inputnum<guessnumber)
        {
            cout<<"YOUR GUESS IS TOO LOW;"<<"\n";
            cin>>inputnum;
        }
    }
    cout<<"YOU WON";
}