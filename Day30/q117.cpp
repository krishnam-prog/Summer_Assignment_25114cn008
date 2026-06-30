#include<iostream>
using namespace std;
int main()
{
    int roll[10], age[10], marks[10];
    char name[10][20];
    int count = 0;
    int choice;
    do
    {
        cout << "\n===== STUDENT RECORD =====";
        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Search Student";
        cout << "\n4. Update Student";
        cout << "\n5. Delete Student";
        cout << "\n6. Exit";

        cout << "\nEnter Choice: ";
        cin >> choice;

        if(choice == 1)
        {
            cout << "Enter Roll Number: ";
            cin >> roll[count];

            cout << "Enter Name: ";
            cin >> name[count];

            cout << "Enter Age: ";
            cin >> age[count];

            cout << "Enter Marks: ";
            cin >> marks[count];

            count++;
        }

        else if(choice == 2)
        {
            if(count==0)
            {
                cout<<"No Records Found";
            }
            else
            {
                for(int i=0;i<count;i++)
                {
                    cout<<"\nRoll No: "<<roll[i];
                    cout<<"\nName: "<<name[i];
                    cout<<"\nAge: "<<age[i];
                    cout<<"\nMarks: "<<marks[i]<<endl;
                }
            }
        }

        else if(choice == 3)
        {
            int r, found=0;

            cout<<"Enter Roll Number: ";
            cin>>r;

            for(int i=0;i<count;i++)
            {
                if(roll[i]==r)
                {
                    cout<<"\nRoll No: "<<roll[i];
                    cout<<"\nName: "<<name[i];
                    cout<<"\nAge: "<<age[i];
                    cout<<"\nMarks: "<<marks[i]<<endl;
                    found=1;
                }
            }

            if(found==0)
            {
                cout<<"Student Not Found";
            }
        }

        else if(choice == 4)
        {
            int r, found=0;

            cout<<"Enter Roll Number to Update: ";
            cin>>r;

            for(int i=0;i<count;i++)
            {
                if(roll[i]==r)
                {
                    cout<<"Enter New Name: ";
                    cin>>name[i];

                    cout<<"Enter New Age: ";
                    cin>>age[i];

                    cout<<"Enter New Marks: ";
                    cin>>marks[i];

                    found=1;
                    cout<<"Record Updated";
                }
            }

            if(found==0)
            {
                cout<<"Student Not Found";
            }
        }

        else if(choice == 5)
        {
            int r, found=0;

            cout<<"Enter Roll Number to Delete: ";
            cin>>r;

            for(int i=0;i<count;i++)
            {
                if(roll[i]==r)
                {
                    for(int j=i;j<count-1;j++)
                    {
                        roll[j]=roll[j+1];
                        age[j]=age[j+1];
                        marks[j]=marks[j+1];

                        int k=0;
                        while(name[j+1][k]!='\0')
                        {
                            name[j][k]=name[j+1][k];
                            k++;
                        }
                        name[j][k]='\0';
                    }

                    count--;
                    found=1;
                    cout<<"Record Deleted";
                    break;
                }
            }

            if(found==0)
            {
                cout<<"Student Not Found";
            }
        }

    }while(choice!=6);

    return 0;
}