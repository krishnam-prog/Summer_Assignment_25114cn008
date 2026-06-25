#include<iostream>
using namespace std;
int main()
{
    char text[]="krishnam";
    int i,j,length=0;
    for(i=0;text[i]!='\0';i++)
        length++;
    for(i=1;i<length;i++)
    {
        for(j=0;j<length-i;j++)
        {
            if(text[j]>text[j+1])
                swap(text[j],text[j+1]);
        }
    }
    cout<<text;
}