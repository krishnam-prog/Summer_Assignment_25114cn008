#include<iostream>
using namespace std;

int main()
{
    int a, b, i, hcf;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    for(i=1;i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        {
            hcf=i;
        }
    }
    cout<<"HCF="<<hcf;
    return 0;
}