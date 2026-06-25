#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char words[10][100]={"apple","hi","elephant","cat","a"};
    int n=5,i,j;
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(strlen(words[j])>strlen(words[j+1]))
            {
                char temp[100];
                strcpy(temp,words[j]);
                strcpy(words[j],words[j+1]);
                strcpy(words[j+1],temp);
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<words[i]<<" ";
    }
}