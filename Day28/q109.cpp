#include<iostream>
using namespace std;
int bookID=0;
char bookName[50];
int quantity=0;
void menu()
{
    cout<<"\n===== LIBRARY MANAGEMENT =====\n";
    cout<<"1. Add Book\n";
    cout<<"2. Display Book\n";
    cout<<"3. Issue Book\n";
    cout<<"4. Return Book\n";
    cout<<"5. Exit\n";
}
void addBook()
{
    cout<<"Enter Book ID: ";
    cin>>bookID;
    cout<<"Enter Book Name: ";
    cin>>bookName;
    cout<<"Enter Quantity: ";
    cin>>quantity;
    cout<<"Book Added Successfully\n";
}
void displayBook()
{
    if(bookID==0)
    {
        cout<<"No Book Available\n";
    }
    else
    {
        cout<<"Book ID: "<<bookID<<endl;
        cout<<"Book Name: "<<bookName<<endl;
        cout<<"Quantity: "<<quantity<<endl;
    }
}
void issueBook()
{
    if(bookID==0)
    {
        cout<<"No Book Available\n";
    }
    else if(quantity>0)
    {
        quantity--;
        cout<<"Book Issued Successfully\n";
    }
    else
    {
        cout<<"Book Out of Stock\n";
    }
}
void returnBook()
{
    if(bookID==0)
    {
        cout<<"No Book Available\n";
    }
    else
    {
        quantity++;
        cout<<"Book Returned Successfully\n";
    }
}
int main()
{
    int choice=0;
    while(choice!=5)
    {
        menu();
        cout<<"Enter Choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                addBook();
                break;
            case 2:
                displayBook();
                break;
            case 3:
                issueBook();
                break;
            case 4:
                returnBook();
                break;
            case 5:
                cout<<"Thank You!";
                break;
            default:
                cout<<"Invalid Choice";
        }
    }
    return 0;
}