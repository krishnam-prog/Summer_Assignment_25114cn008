#include<iostream>
using namespace std;
char movieName[50];
char customerName[50];
int seatNo=0;
float ticketPrice=0;
void menu()
{
    cout<<"\n===== TICKET BOOKING SYSTEM =====\n";
    cout<<"1. Book Ticket\n";
    cout<<"2. View Ticket\n";
    cout<<"3. Cancel Ticket\n";
    cout<<"4. Exit\n";
    cout<<"Enter Choice: ";
}
void bookTicket()
{
    cout<<"Enter Customer Name: ";
    cin>>customerName;
    cout<<"Enter Movie Name: ";
    cin>>movieName;
    cout<<"Enter Seat Number: ";
    cin>>seatNo;
    cout<<"Enter Ticket Price: ";
    cin>>ticketPrice;
    cout<<"Ticket Booked Successfully\n";
}
void viewTicket()
{
    if(seatNo==0)
    {
        cout<<"No Ticket Booked\n";
    }
    else
    {
        cout<<"Customer Name: "<<customerName<<endl;
        cout<<"Movie Name: "<<movieName<<endl;
        cout<<"Seat Number: "<<seatNo<<endl;
        cout<<"Ticket Price: "<<ticketPrice<<endl;
    }
}
void cancelTicket()
{
    if(seatNo==0)
    {
        cout<<"No Ticket Booked\n";
    }
    else
    {
        seatNo=0;
        ticketPrice=0;
        cout<<"Ticket Cancelled Successfully\n";
    }
}
int main()
{
    int choice=0;
    while(choice!=4)
    {
        menu();
        cin>>choice;
        switch(choice)
        {
            case 1:
                bookTicket();
                break;
            case 2:
                viewTicket();
                break;
            case 3:
                cancelTicket();
                break;
            case 4:
                cout<<"Thank You!";
                break;
            default:
                cout<<"Invalid Choice\n";
        }
    }
    return 0;
}