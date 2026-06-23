#include<iostream>
using namespace std;
int main()
{
    char word1[100],word2[100],ans[1000];
    cout<<"ENTER THE WORD1;";
    cin>>word1;
    cout<<"ENTER THE WORD2;";
    cin>>word2;
    int i=0,j=0,length1=0,length2=0,k=0,decision=0;
    for(i=0;word1[i]!=0;i++)
    {
        length1++;
    }
    for(i=0;word2[i]!=0;i++)
    {
        length2++;
    }
    if(length1==length2)
    {
        cout<<"THERE IS A POSSIBILITY OF ANAGRAM STRINGS;"<<endl;
    }
    else
    {
        cout<<"THERE IS NO POSSIBILITIY OF ANAGRAM STRINGS;";
    }
    for(i=0;i<length1;i++)
    {
        for(j=0;j<length2;j++)
        {
            if(word1[i]==word2[j])
            {
                ans[k]=word2[j];
                k++;
            }
        }
        if(word1[i]==ans[i])
        {
            decision=1;
        }
    }
    if(decision==1)
    {
        cout<<"YES THEY ARE ANAGRAM STRINGS;";
    }
    else
    {
        cout<<"NO THEY ARE NOT ANAGRAM STRINGS;";
    }
}