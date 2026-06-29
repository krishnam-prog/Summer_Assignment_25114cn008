#include<iostream>
using namespace std;
void menu()
{
    cout<<"\n==========INVENTORY MANAGEMENT==========\n";
    cout<<"1. ADD PRODUCT\n";
    cout<<"2. DISPLAY PRODUCTS\n";
    cout<<"3. SEARCH PRODUCT\n";
    cout<<"4. UPDATE QUANTITY\n";
    cout<<"5. DELETE PRODUCT\n";
    cout<<"6. EXIT\n";
}
int addProduct(int id[],char name[][30],int quantity[],int price[],int &n)
{
    cout<<"ENTER PRODUCT ID: ";
    cin>>id[n];
    cout<<"ENTER PRODUCT NAME: ";
    cin>>name[n];
    cout<<"ENTER PRODUCT QUANTITY: ";
    cin>>quantity[n];
    cout<<"ENTER PRODUCT PRICE: ";
    cin>>price[n];
    n++;
    cout<<"PRODUCT ADDED SUCCESSFULLY\n";
    return 0;
}
int display(int id[],char name[][30],int quantity[],int price[],int n)
{
    if(n==0)
    {
        cout<<"NO PRODUCTS AVAILABLE\n";
        return 0;
    }
    cout<<"\nID\tNAME\tQUANTITY\tPRICE\n";
    for(int i=0;i<n;i++)
    {
        cout<<id[i]<<"\t"<<name[i]<<"\t"<<quantity[i]<<"\t\t"<<price[i]<<endl;
    }
    return 0;
}
int search(int id[],char name[][30],int quantity[],int price[],int n)
{
    int pid;
    cout<<"ENTER PRODUCT ID TO SEARCH: ";
    cin>>pid;
    for(int i=0;i<n;i++)
    {
        if(id[i]==pid)
        {
            cout<<"\nPRODUCT FOUND\n";
            cout<<"ID: "<<id[i]<<endl;
            cout<<"NAME: "<<name[i]<<endl;
            cout<<"QUANTITY: "<<quantity[i]<<endl;
            cout<<"PRICE: "<<price[i]<<endl;
            return 0;
        }
    }
    cout<<"PRODUCT NOT FOUND\n";
    return 0;
}
int update(int id[],int quantity[],int n)
{
    int pid,newqty;
    cout<<"ENTER PRODUCT ID: ";
    cin>>pid;
    for(int i=0;i<n;i++)
    {
        if(id[i]==pid)
        {
            cout<<"ENTER NEW QUANTITY: ";
            cin>>newqty;
            quantity[i]=newqty;
            cout<<"QUANTITY UPDATED SUCCESSFULLY\n";
            return 0;
        }
    }
    cout<<"PRODUCT NOT FOUND\n";
    return 0;
}
int del(int id[],char name[][30],int quantity[],int price[],int &n)
{
    int pid;
    cout<<"ENTER PRODUCT ID TO DELETE: ";
    cin>>pid;
    for(int i=0;i<n;i++)
    {
        if(id[i]==pid)
        {
            for(int j=i;j<n-1;j++)
            {
                id[j]=id[j+1];
                quantity[j]=quantity[j+1];
                price[j]=price[j+1];
                int k=0;
                while(name[j+1][k]!='\0')
                {
                    name[j][k]=name[j+1][k];
                    k++;
                }
                name[j][k]='\0';
            }
            n--;
            cout<<"PRODUCT DELETED SUCCESSFULLY\n";
            return 0;
        }
    }
    cout<<"PRODUCT NOT FOUND\n";
    return 0;
}
int Exit()
{
    cout<<"THANK YOU";
    return 0;
}
int main()
{
    int id[100],quantity[100],price[100];
    char name[100][30];
    int n=0;
    int choice=0;
    while(choice!=6)
    {
        menu();
        cout<<"ENTER YOUR CHOICE: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                addProduct(id,name,quantity,price,n);
                break;
            case 2:
                display(id,name,quantity,price,n);
                break;
            case 3:
                search(id,name,quantity,price,n);
                break;
            case 4:
                update(id,quantity,n);
                break;
            case 5:
                del(id,name,quantity,price,n);
                break;
            case 6:
                Exit();
                break;
            default:
                cout<<"INVALID CHOICE\n";
        }
    }
    return 0;
}