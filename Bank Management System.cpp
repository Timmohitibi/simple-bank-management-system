#include<iostream>
using namespace std;
class bank
{
    char name[100],add[100],y;
    int balance;
    public:
        void open_account();
        void deposit_money();
        void withdraw_money();
        void display_account();
        };
    void bank ::open_account()
    {
    cout<<"enter your full name :: ";
        cin.ignore();
        cin.getline(name,100);
        cout<<"enter your address :: ";
        cin.ignore();
        cin.getline(add,100);
        cout<<"What type of account do you want to open? saving (s) or current (c):: ";
        cin>>y;
        cout<<"enter amount you want to deposit ::";
        cin>>balance;
        cout<<"Your acoount has been created \n";
    }
void bank ::deposit_money()
    {
        int a;
        cout<<"enter how much you want to deposit :: ";
        cin>>a;
        balance+=a;
        cout<<"total amount you deposited is :: \t "<< balance;

    }
    void bank:: display_account()
    {
        cout<<"Your full name :: \t"<<name;
        cout<<"Your address is :: \t"<<add;void withdraw_money();
        cout<<"type of account you opened ::\t"<<y;
        cout<<"Amount you deposited is :: \t"<<balance;
    }
    void bank :: withdraw_money()
    {
    float amount;
    cout<<"\n withdraw :: ";
    cout<<"enter amount you want to withdraw :: ";
    cin>> amount;
    balance=balance-amount;
    cout<<"total amount left ::" <<balance;
    }



int main()
{
    int ch,x;
    bank obj;
    do
    {

    cout<<"1) open account \n";
    cout<<"2) deposit money \n";
    cout<<"3) withdraw money \n";
    cout<<"4) display account \n";
    cout<<"5) Exit";
    cout<<"select the option from above \n";
    cin>> ch;
    switch(ch)
    {
        case 1:cout<<"1) open account \n";
        obj.open_account();
        break;

        case 2:cout<<"2) deposit money \n";
        obj.deposit_money();
        break;

        case 3:
                cout<<"3) withdraw money : \n";
                obj.withdraw_money();
                break;
        case 4:cout<< "4) display account \n";
        obj.display_account();
        break;
        case 5:
                if ( ch ==5)
                {
                        exit(1);
                        }
    default:
            cout<<"this account does not exist. Try again! \n";
    }

    cout<<"\n do you want to select next option? press :: y \n";
    cout<<" If you want to exit, press :: n";
    x=cin.get();
    if (x=='n'|x=='N')
    exit(0);
    } while (x=='y'||x=='Y');

    cin.get();
    return 0;

}





