#include<iostream>
using namespace std;

int main()
{
    int empId[10], age[10], salary[10];
    char empName[10][20];

    int count = 0;
    int choice;

    do
    {
        cout << "\n===== EMPLOYEE MANAGEMENT SYSTEM =====";
        cout << "\n1. Add Employee";
        cout << "\n2. Display Employees";
        cout << "\n3. Search Employee";
        cout << "\n4. Update Employee";
        cout << "\n5. Delete Employee";
        cout << "\n6. Exit";

        cout << "\nEnter Choice: ";
        cin >> choice;

        if(choice == 1)
        {
            cout << "Enter Employee ID: ";
            cin >> empId[count];

            cout << "Enter Employee Name: ";
            cin >> empName[count];

            cout << "Enter Age: ";
            cin >> age[count];

            cout << "Enter Salary: ";
            cin >> salary[count];

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
                    cout<<"\nEmployee ID: "<<empId[i];
                    cout<<"\nEmployee Name: "<<empName[i];
                    cout<<"\nAge: "<<age[i];
                    cout<<"\nSalary: "<<salary[i]<<endl;
                }
            }
        }

        else if(choice == 3)
        {
            int id, found=0;

            cout<<"Enter Employee ID: ";
            cin>>id;

            for(int i=0;i<count;i++)
            {
                if(empId[i]==id)
                {
                    cout<<"\nEmployee ID: "<<empId[i];
                    cout<<"\nEmployee Name: "<<empName[i];
                    cout<<"\nAge: "<<age[i];
                    cout<<"\nSalary: "<<salary[i]<<endl;
                    found=1;
                }
            }

            if(found==0)
            {
                cout<<"Employee Not Found";
            }
        }

        else if(choice == 4)
        {
            int id, found=0;

            cout<<"Enter Employee ID to Update: ";
            cin>>id;

            for(int i=0;i<count;i++)
            {
                if(empId[i]==id)
                {
                    cout<<"Enter New Employee Name: ";
                    cin>>empName[i];

                    cout<<"Enter New Age: ";
                    cin>>age[i];

                    cout<<"Enter New Salary: ";
                    cin>>salary[i];

                    found=1;
                    cout<<"Employee Record Updated";
                }
            }

            if(found==0)
            {
                cout<<"Employee Not Found";
            }
        }

        else if(choice == 5)
        {
            int id, found=0;

            cout<<"Enter Employee ID to Delete: ";
            cin>>id;

            for(int i=0;i<count;i++)
            {
                if(empId[i]==id)
                {
                    for(int j=i;j<count-1;j++)
                    {
                        empId[j]=empId[j+1];
                        age[j]=age[j+1];
                        salary[j]=salary[j+1];

                        int k=0;
                        while(empName[j+1][k]!='\0')
                        {
                            empName[j][k]=empName[j+1][k];
                            k++;
                        }
                        empName[j][k]='\0';
                    }

                    count--;
                    found=1;
                    cout<<"Employee Record Deleted";
                    break;
                }
            }

            if(found==0)
            {
                cout<<"Employee Not Found";
            }
        }

    }while(choice!=6);

    return 0;
}