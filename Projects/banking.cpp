#include <iostream>
using namespace std;
class bankAcc{
    string accH;
    long accno;
    double bal;
    bool isvalidAmount(double amt){
        return amt>0;
    };
public:
bankAcc(string n,long a,double ibal){
    accH = n;
    accno = a;
    if (ibal >=0){
        bal = ibal;
    }
    else bal = 0;
}
// string getAccountholder(){
//     return accH;
// }
// long getAccountNumber(){
//     return accno;
// }
// double getBalance (){
//     return bal;
// }
void deposit(double amt);
void withdrawal(double amt);
void display();
};
void bankAcc :: deposit(double amt){
    if(isvalidAmount(amt)){
        bal += amt;
        cout<<"Deposited: "<<amt<<"\nCurrent Balance: "<<bal<<endl;
    }
    else{
        cout<<"Invalid amount "<<endl;
    }
};
void bankAcc :: withdrawal (double amt){
    if(isvalidAmount(amt) && bal>amt){
        bal-= amt;
        cout<<"Withdrawal: "<<amt<<"\ncurrent Balance: "<<bal<<endl;
    }
    else{
        cout<<"Invalid Amount\n"<<endl;
    }
};
void bankAcc :: display(){
    cout<<"Acc Holder = "<<accH<<"\nAcc no.: "<<accno<<"\nCurrent Balance: "<<bal<<endl;
};

int main(){
    bankAcc b ("kshitij",123456,10000);
   // b.bal = 10000;
    b.deposit(2000);
    b.withdrawal(1000);
    b.display();
};