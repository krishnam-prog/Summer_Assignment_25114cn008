#include<iostream>
using namespace std;
void menu()
{
    cout<<"\n========CALCULATOR========\n";
    cout<<"1. ADDITION \n";
    cout<<"2. SUBTRACTION \n";
    cout<<"3. MULTIPLICATION \n";
    cout<<"4. DIVISION \n";
    cout<<"5. EXIT \n";
}
int add(float a, float b)
{
    cout<<"THE ADDITION OF THE TWO NUMBERS IS:"<<a+b;
    return 0;
}
int difference(float a, float b)
{
    float max=a;
    if(b>max)
    {
        cout<<"THE DIFFERENCE IS:"<<b-a;
        return 0;
    }
    else
    {
        cout<<"THE DIFFERENCE IS:"<<a-b;
        return 0;
    }
}
int multiply(float a, float b)
{
    cout<<"THE MULTIPLICATION IS:"<<a*b;
    return 0;
}
int  division(float a, float b)
{
    if(a==0 || b==0)
    {
        cout<<"THE DIVISION IS NOT POSSIBLE";
        return 0;
    }
    float max=a;
    if(b>max)
    {
        cout<<"THE DIVISION IS:"<<b/a;
        return 0;
    }
    else
    {
        cout<<"THE DIVISION IS:"<<a/b;
        return 0;
    }
}
void exit()
{
    cout<<"THANKYOU \n";
}
int main()
{
    int choice;
    float x,y;
    cout<<"ENTER THE VALUE OF X: \n";
    cin>>x;
    cout<<"ENTER THE VALUE OF Y: \n";
    cin>>y;
    while(choice!=5)
    {
        menu();
        cout<<"ENTER THE CHOICE:";
        cin>>choice;
        switch(choice)
        {
            case 1:
            add(x,y);
            break;
            case 2:
            difference(x,y);
            break;
            case 3:
            multiply(x,y);
            break;
            case 4:
            division(x,y);
            break;
            case 5:
            exit();
            break;
            default:
            cout<<"INVALID CHOICE:";
            break;
        }
    }
}