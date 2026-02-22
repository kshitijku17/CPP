// Data -- account number, pin, balance, is Authentiation
// Method -- deposite, withdrwal, check balance, logout, ministatemnet, pin change 
#include <iostream>
using namespace std;
class ATM{
    string Acch;
    long Accno;
    double bal;
    int pin;
    bool isvalidAmount(double amt){
        return amt>0;
    };
    bool isvalidPin(int pin){
        return pin>0;
    };
    public:
    ATM(string a,long b,double ibal,int p){
    Acch = a;
    Accno = b;
    pin = p;
    if (ibal >=0){
        bal = ibal;
    }
    else bal = 0;
}
void depo(double amt);
void with(double amt);
void check();
void change(int Opin,int Npin);
void mini();
};
void ATM :: depo(double amt){
    if(isvalidAmount(amt)){
        bal += amt;
        cout<<"Deposited: "<<amt<<endl;
    }
    else{
        cout<<"Invalid amount "<<endl;
    }
};
void ATM :: with(double amt){
    if(isvalidAmount(amt) && bal>amt){
        bal-= amt;
        cout<<"Withdrawal: "<<amt<<endl;
    }
    else{
        cout<<"Invalid Amount\n"<<endl;
    }
};
void ATM :: check(){
    cout<<"Current balance: "<<bal<<endl;
};
void ATM::change(int Opin, int Npin){
    if(Opin == pin){
        pin = Npin;
        cout<<"PIN changed successfully"<<endl;
    }
    else{
        cout<<"Please enter correct old pin"<<endl;
    }
}
void ATM :: mini(){
    cout<<"Acc Holder = "<<Acch<<"\nAcc no.: "<<Accno<<"\nCurrent Balance: "<<bal<<endl;
};
int main(){
    ATM u ("Kshitij",123456,10000,1234);
    int Opin,Npin,amt,choice;
    cout << "\n----- ATM MENU -----\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Check Balance\n";
        cout << "4. Change PIN\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout<<"Enter amount to deposit"<<endl;
            cin>>amt;
            u.depo(amt);
            break;
        
        case 2:
            cout<<"Enter amount to withdrwal"<<endl;
            cin>>amt;
           u.with(amt);
            break;
        
        case 3:
            cout<<"Check balance "<<endl;
            u.check();
            break;
        
        case 4:
            cout<<"Old pin"<<endl;
            cin>>Opin;
            cout<<"New pin"<<endl;
            cin>>Npin;
            u.change(Opin,Npin);
            break;
        
        default: cout << "Invalid Choice" <<endl;
            break;
        }
        u.mini();
}
