#include<iostream>
using namespace std;

int main()
{
    int roll[10], phy[10], chem[10], maths[10], total[10];
    float percentage[10];
    char name[10][20];

    int count=0;
    int choice;

    do
    {
        cout<<"\n===== MARKSHEET GENERATION SYSTEM =====";
        cout<<"\n1. Add Student";
        cout<<"\n2. Display Marksheet";
        cout<<"\n3. Search Student";
        cout<<"\n4. Update Record";
        cout<<"\n5. Delete Record";
        cout<<"\n6. Exit";

        cout<<"\nEnter Choice: ";
        cin>>choice;

        if(choice==1)
        {
            cout<<"Enter Roll Number: ";
            cin>>roll[count];

            cout<<"Enter Name: ";
            cin>>name[count];

            cout<<"Enter Physics Marks: ";
            cin>>phy[count];

            cout<<"Enter Chemistry Marks: ";
            cin>>chem[count];

            cout<<"Enter Maths Marks: ";
            cin>>maths[count];

            total[count]=phy[count]+chem[count]+maths[count];
            percentage[count]=total[count]/3.0;

            count++;
        }

        else if(choice==2)
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
                    cout<<"\nPhysics: "<<phy[i];
                    cout<<"\nChemistry: "<<chem[i];
                    cout<<"\nMaths: "<<maths[i];
                    cout<<"\nTotal: "<<total[i];
                    cout<<"\nPercentage: "<<percentage[i]<<"%";

                    if(percentage[i]>=40)
                        cout<<"\nResult: PASS";
                    else
                        cout<<"\nResult: FAIL";

                    cout<<endl;
                }
            }
        }

        else if(choice==3)
        {
            int r,found=0;

            cout<<"Enter Roll Number: ";
            cin>>r;

            for(int i=0;i<count;i++)
            {
                if(roll[i]==r)
                {
                    cout<<"\nRoll No: "<<roll[i];
                    cout<<"\nName: "<<name[i];
                    cout<<"\nPhysics: "<<phy[i];
                    cout<<"\nChemistry: "<<chem[i];
                    cout<<"\nMaths: "<<maths[i];
                    cout<<"\nTotal: "<<total[i];
                    cout<<"\nPercentage: "<<percentage[i]<<"%";
                    found=1;
                }
            }

            if(found==0)
                cout<<"Student Not Found";
        }

        else if(choice==4)
        {
            int r,found=0;

            cout<<"Enter Roll Number to Update: ";
            cin>>r;

            for(int i=0;i<count;i++)
            {
                if(roll[i]==r)
                {
                    cout<<"Enter New Name: ";
                    cin>>name[i];

                    cout<<"Enter Physics Marks: ";
                    cin>>phy[i];

                    cout<<"Enter Chemistry Marks: ";
                    cin>>chem[i];

                    cout<<"Enter Maths Marks: ";
                    cin>>maths[i];

                    total[i]=phy[i]+chem[i]+maths[i];
                    percentage[i]=total[i]/3.0;

                    found=1;
                    cout<<"Record Updated";
                }
            }

            if(found==0)
                cout<<"Student Not Found";
        }

        else if(choice==5)
        {
            int r,found=0;

            cout<<"Enter Roll Number to Delete: ";
            cin>>r;

            for(int i=0;i<count;i++)
            {
                if(roll[i]==r)
                {
                    for(int j=i;j<count-1;j++)
                    {
                        roll[j]=roll[j+1];
                        phy[j]=phy[j+1];
                        chem[j]=chem[j+1];
                        maths[j]=maths[j+1];
                        total[j]=total[j+1];
                        percentage[j]=percentage[j+1];

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
                cout<<"Student Not Found";
        }

    }while(choice!=6);

    return 0;
}