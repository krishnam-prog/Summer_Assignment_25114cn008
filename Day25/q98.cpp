#include<iostream>
using namespace std;
int main()
{
    char str1[]="hello";
    char str2[]="world";
    int i,j;
    cout<<"Common characters: ";
    for(i=0;str1[i]!='\0';i++)
    {
        for(j=0;str2[j]!='\0';j++)
        {
            if(str1[i]==str2[j])
            {
                cout<<str1[i]<<" ";
                break;
            }
        }
    }
}