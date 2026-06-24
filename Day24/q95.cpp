#include<iostream>
using namespace std;

int main()
{
    char text[1000], longest[100];
    cout<<"ENTER THE SENTENCE: ";
    cin.getline(text,1000);

    int i=0, start=0;
    int maxLen=0, currLen=0;

    while(true)
    {
        if(text[i]==' ' || text[i]=='\0')
        {
            if(currLen > maxLen)
            {
                maxLen = currLen;

                for(int j=0; j<currLen; j++)
                {
                    longest[j] = text[start+j];
                }
                longest[currLen] = '\0';
            }

            start = i + 1;
            currLen = 0;

            if(text[i]=='\0')
                break;
        }
        else
        {
            currLen++;
        }

        i++;
    }

    cout<<"Longest word: "<<longest;
    cout<<"\nLength: "<<maxLen;

    return 0;
}