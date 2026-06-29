#include<iostream>
using namespace std;
void menu()
{
    cout<<"\n============ARRAYS OPERATION'S===============\n";
    cout<<"1. DISPLAY ARRAY \n";
    cout<<"2. INSERT ARRAY \n";
    cout<<"3. DELETE ARRAY \n";
    cout<<"4. SEARCH ARRAY \n";
    cout<<"5. EXIT\n";
}
int display(int arr[100],int n)
{
    cout<<"YOUR ARRAY IS: \n";
    int i=0;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
int insert(int arr[100],int n)
{
    int i=0;
    int element;
    cout<<"ENTER THE ELEMENT YOU WANT TO INSERT AT LAST:";
    cin>>element;
    arr[n]=element;
    n++;
    cout<<"YOUR ELEMENT IS INSERTED \n";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
int del(int arr[100],int n)
{
    int i=0;
    int delnum;
    cout<<"ENTER THE NO. YOU WANT TO DELETE:";
    cin>>delnum;
    for(i=0;i<n;i++)
    {
        if(arr[i]==delnum)
        {
            cout<<"YOUR NO. IS SUCCESSFULLY DELETED \n";
            arr[i]=0;
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
int search(int arr[100],int n)
{
    int searchnum;
    cout<<"ENTER THE ELEMENT YOU WANT TO SEARCH:";
    cin>>searchnum;
    int i=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==searchnum)
        {
            cout<<"YOUR ELEMENT IS FOUND\n";
            cout<<"AT INDEX:"<<i;
        }
    }
    return 0;
}
int exit()
{
    cout<<"THANK YOU";
}
int main()
{
    int choice,arr[100],n;
    cout<<"\nENTER THE SIZE OF THE ARRAY:\n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    while(choice!=5)
    {
        menu();
        cout<<"ENTER YOUR CHOICE:";
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
            exit();
            break;
            defaut:
            cout<<"INVALID CHOICE";
            break;
        }
    }
}
