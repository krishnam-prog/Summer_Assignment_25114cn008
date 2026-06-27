#include<iostream>
using namespace std;
int balance=1000;
int menu()
{
    cout<<"1.CHECK BALANCE"<<"\n";
    cout<<"2.DEPOSIT"<<"\n";
    cout<<"3.WITHDRAW"<<"\n";
    cout<<"4.EXIT"<<"\n";
}
int checkbalance()
{
    cout<<"Your currrent balance is:"<<balance;
    return 0;
}
int deposit(int amount)
{
    balance=balance+amount;
    cout<<"YOUR BALANCE IS SUCCESFULLY UPDATED"<<"\n";
    cout<<"YOUR CURRRENT BALANCE IS:"<<balance;
}
int withdraw(int amt)
{
    balance=balance-amt;
    cout<<"YOUR AMOUNT"<<amt<<"WAS SUCCESSFULLY DEDUCTED;"<<"\n";
    cout<<"YOUR UPDATED BALANCE IS:"<<balance;
}
int main()
{
    int storedpin=112233;
    int pin;
    cout<<"ENTER THE PIN:";
    cin>>pin;
    if(pin==storedpin)
    {
        menu();
    }
    else
    {
        cout<<"INVALID PIN";
        return 0;
    }
    int value;
    cout<<"ENTER 1 FOR CHECKING YOUR BALANCE"<<"\n";
    cout<<"ENTER 2 FOR DEPOSITING THE MONEY"<<"\n";
    cout<<"ENTER 3 FOR WITHDRAWING THE MONEY"<<"\n";
    cout<<"ENTER 4 FOR EXIT"<<"\n";
    cin>>value;
    if(value==1)
    {
        checkbalance();
    }
    if(value==2)
    {
        int addmoney;
        cout<<"ENTER THE DEPOSITING AMOUNT:"<<"\n";
        cin>>addmoney;
        deposit(addmoney);
    }
    if(value==3)
    {
        int deductmoney;
        cout<<"ENTER THE WITHDRAWAL AMOUNT:"<<"\n";
        cin>>deductmoney;
        withdraw(deductmoney);
    }
    if(value==4)
    {
        cout<<"THANKS FOR YOUR VISIT";
        return 0;
    }
}