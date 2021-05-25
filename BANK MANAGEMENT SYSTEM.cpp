#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

////////////////bank management///////////

class bank
{
    private:
        char name[100],address[1000],y;
        float balance;
    public:
        void open_account();
        void deposit_money();
        void widraw_money();
        void display_account();
};
    void bank::open_account()
    {   
        cout<<"\nOPEN ACCOUNT\n";
        cout<<"\nenter your name: ";
        cin.ignore();
        cin.getline(name,100);
        cout<<"\nenter your address:\n";
        cin.ignore();
        cin.getline(address,1000);
        cout<<"\nwhat type of account do you want saving(s) or current(c):";
        cin>>y;
        cout<<"\n enter amount to be deposited:";
        cin>>balance;
        cout<<"your account is created";
    }
    void bank::deposit_money()
    {   
        int a;
        cout<<"\nDEPOSIT MONEY\n";
        cout<<"\nWITHDRAW: ";
        cout<<"\n\nhow much you deposit:";
        cin>>a;
        balance+=a;
        cout<<"\ntotal deposit amount:\t"<<balance;
    }
    void bank::display_account()
    {   
        cout<<"\nACCOUNT DETAILS\n";
        cout<<"\nyour full name:\t"<<name;
        cout<<"\nyour address: \t"<<address;
        cout<<"\ntype of account you've opened:\t"<<y;
        cout<<"\namount you deposited:\t"<<balance;
    }
    void bank::widraw_money()
    {   
        float amount;
        cout<<"\nWITHDRAW: ";
        cout<<"\nenter amount to withdraw:";
        cin>>amount;
        balance-=amount;
        cout<<"\nnow total amount left"<<balance;
    }
int main()
{
    int ch,x;
    bank b1;
    do
    {   
        cout<<"\nPLEASE SELECT AN OPTION\n";
        cout<<"\n1) open account:\n";
        cout<<"\n2) deposit money:\n";
        cout<<"\n3) withdraw money:\n";
        cout<<"\n4) display account:\n";
        cout<<"\n5)exit:\n";
        cin>>ch;
        switch(ch)
            {
                case 1:
                    b1.open_account();
                    break;
                case 2:
                    b1.deposit_money();
                    break;
                case 3:
                    b1.widraw_money();
                    break;
                case 4:
                    b1.display_account();
                    break;
                case 5:
                    if(ch==5)
                    {
                        exit(1);
                    }
                default:
                    cout<<"\ninvalid command\n";
                    break;
            }
        cout<<"\nwant to continue again::press Y";
        cout<<"\nwant to exit::press N";
        x=getch();
        if(x=='n'||x=='N')
        {
            exit(0);
        }
    }
     while (x=='y'||x=='Y'); 
     getch();
     return 0;
}

