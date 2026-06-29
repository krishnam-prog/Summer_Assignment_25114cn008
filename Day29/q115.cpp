#include<iostream>
using namespace std;
void menu()
{
    cout<<"\n============CHARACTER OPERATION'S===============\n";
    cout<<"1. DISPLAY CHARACTERS\n";
    cout<<"2. INSERT CHARACTER\n";
    cout<<"3. DELETE CHARACTER\n";
    cout<<"4. SEARCH CHARACTER\n";
    cout<<"5. EXIT\n";
}
int display(char arr[100],int n)
{
    cout<<"YOUR CHARACTERS ARE:\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
int insert(char arr[100],int &n)
{
    char element;
    cout<<"ENTER THE CHARACTER YOU WANT TO INSERT AT LAST: ";
    cin>>element;
    arr[n]=element;
    n++;
    cout<<"YOUR CHARACTER IS INSERTED\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
int del(char arr[100],int &n)
{
    char delchar;
    cout<<"ENTER THE CHARACTER YOU WANT TO DELETE: ";
    cin>>delchar;
    int i=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==delchar)
        {
            arr[i]='x';
            cout<<"YOUR CHARACTER IS SUCCESSFULLY DELETED\n";
            break;
        }
    }
    if(i==n)
    {
        cout<<"CHARACTER NOT FOUND\n";
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
int search(char arr[100],int n)
{
    char searchchar;
    cout<<"ENTER THE CHARACTER YOU WANT TO SEARCH: ";
    cin>>searchchar;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==searchchar)
        {
            cout<<"YOUR CHARACTER IS FOUND\n";
            cout<<"AT INDEX: "<<i<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"CHARACTER NOT FOUND\n";
    }
    return 0;
}
int Exit()
{
    cout<<"THANK YOU";
    return 0;
}
int main()
{
    int choice=0,n;
    char arr[100];
    cout<<"ENTER THE SIZE OF THE ARRAY: ";
    cin>>n;
    cout<<"ENTER "<<n<<" CHARACTERS:\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    while(choice!=5)
    {
        menu();
        cout<<"ENTER YOUR CHOICE: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                display(arr,n);
                break;
            case 2:
                insert(arr,n);
                break;
            case 3:
                del(arr,n);
                break;
            case 4:
                search(arr,n);
                break;
            case 5:
                Exit();
                break;
            default:
                cout<<"INVALID CHOICE\n";
                break;
        }
    }
    return 0;
}