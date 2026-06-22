#include<iostream>
using namespace std;
int main()
{
    char sentence[1000];
    int i=0;
    cout<<"ENTER THE SENTENCE;";
    cin.getline(sentence,1000);
    int count=0;
    for(i=0;sentence[i]!=0;i++)
    {
        if(sentence[i]==' ')
        {
            count++;
        }
    }
    cout<<"THE WORDS PRESENT IN THE SENTENCE ARE:"<<(count+1);
}