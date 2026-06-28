#include<iostream>
using namespace std;
int accountNo=0;
char name[50];
float balance=0;
void menu()
{
    cout<<"\n===== BANK ACCOUNT MANAGEMENT =====\n";
    cout<<"1. Create Account\n";
    cout<<"2. Check Balance\n";
    cout<<"3. Deposit Money\n";
    cout<<"4. Withdraw Money\n";
    cout<<"5. Exit\n";
    cout<<"Enter Choice: ";
}
void createAccount()
{
    cout<<"Enter Account Number: ";
    cin>>accountNo;
    cout<<"Enter Account Holder Name: ";
    cin>>name;
    cout<<"Enter Initial Balance: ";
    cin>>balance;
    cout<<"Account Created Successfully\n";
}
void checkBalance()
{
    if(accountNo==0)
    {
        cout<<"No Account Found\n";
    }
    else
    {
        cout<<"Account Number: "<<accountNo<<endl;
        cout<<"Account Holder: "<<name<<endl;
        cout<<"Current Balance: "<<balance<<endl;
    }
}
void depositMoney()
{
    float amount;
    if(accountNo==0)
    {
        cout<<"No Account Found\n";
    }
    else
    {
        cout<<"Enter Amount: ";
        cin>>amount;
        balance=balance+amount;
        cout<<"Amount Deposited Successfully\n";
    }
}
void withdrawMoney()
{
    float amount;
    if(accountNo==0)
    {
        cout<<"No Account Found\n";
    }
    else
    {
        cout<<"Enter Amount: ";
        cin>>amount;
        if(amount<=balance)
        {
            balance=balance-amount;
            cout<<"Amount Withdrawn Successfully\n";
        }
        else
        {
            cout<<"Insufficient Balance\n";
        }
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
                createAccount();
                break;
            case 2:
                checkBalance();
                break;
            case 3:
                depositMoney();
                break;
            case 4:
                withdrawMoney();
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