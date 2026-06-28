#include<iostream>
using namespace std; 
char name[50];
char phone[15];
char email[50]; 
void menu()
{
    cout<<"\n===== CONTACT MANAGEMENT SYSTEM =====\n";
    cout<<"1. Add Contact\n";
    cout<<"2. View Contact\n";
    cout<<"3. Update Contact\n";
    cout<<"4. Delete Contact\n";
    cout<<"5. Exit\n";
    cout<<"Enter Choice: ";
}
void addContact()
{
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Phone Number: ";
    cin>>phone;
    cout<<"Enter Email: ";
    cin>>email;
    cout<<"Contact Added Successfully\n";
}
void viewContact()
{
    if(name[0]=='\0')
    {
        cout<<"No Contact Found\n";
    }
    else
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Phone: "<<phone<<endl;
        cout<<"Email: "<<email<<endl;
    }
}
void updateContact()
{
    if(name[0]=='\0')
    {
        cout<<"No Contact Found\n";
    }
    else
    {
        cout<<"Enter New Name: ";
        cin>>name;
        cout<<"Enter New Phone Number: ";
        cin>>phone;
        cout<<"Enter New Email: ";
        cin>>email;
        cout<<"Contact Updated Successfully\n";
    }
}
void deleteContact()
{
    if(name[0]=='\0')
    {
        cout<<"No Contact Found\n";
    }
    else
    {
        name[0]='\0';
        phone[0]='\0';
        email[0]='\0';
        cout<<"Contact Deleted Successfully\n";
    }
}
int main()
{
    int choice=0;
    while(choice!=5)
    {
        menu();
        cin>>choice;
        switch(choice)
        {
            case 1:
                addContact();
                break;
            case 2:
                viewContact();
                break;
            case 3:
                updateContact();
                break;
            case 4:
                deleteContact();
                break;
            case 5:
                cout<<"Thank You!";
                break;
            default:
                cout<<"Invalid Choice\n";
        }
    }
    return 0;
}