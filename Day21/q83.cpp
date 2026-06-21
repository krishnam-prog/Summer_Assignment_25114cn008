#include<iostream>
using namespace std;
int main()
{
    char name[100];
    int vowels=0,consonants=0;
    cout<<"ENTER NAME:";
    cin>>name;
    int i=0;
    while(name[i]!=0)
    {
        if(name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u')
        {
            vowels++;
        }
        else
        {
            consonants++;
        }
        i++;
    }
    cout<<"THE NUMBER OF VOWELS:"<<vowels<<endl;
    cout<<"THE NUMBER OF CONSONANTS IS:"<<consonants;
}