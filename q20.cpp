#include<iostream>
using namespace std;
int main()
{
    int n,i,j,count,lprimef=0;
    cout<<"Enter the no. whose factors is to be calculated:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count=0;
            cout<<"The factors of the no. is:"<<i;
            cout<<"\n";
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    count=count+1;
                }
            }
            if(count==2)
            {
                lprimef=i;
            }
        }
    }
    cout<<"The largest prime factor of given no is:"<<lprimef;
}