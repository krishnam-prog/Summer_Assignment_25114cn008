#include<iostream>
using namespace std;

int main()
{
    char str[100];
    cout<<"ENTER STRING: ";
    cin>>str;

    int i,j,k;

    for(i=0; str[i]!='\0'; i++)
    {
        for(j=i+1; str[j]!='\0'; )
        {
            if(str[i]==str[j])
            {
                for(k=j; str[k]!='\0'; k++)
                {
                    str[k]=str[k+1];
                }
            }
            else
            {
                j++;
            }
        }
    }

    cout<<"After removing duplicates: "<<str;

    return 0;
}