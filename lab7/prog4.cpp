#include <iostream>
using namespace std;

class BankAcc{
    public:
    int Accno;
    int balance;
};

class SavingsAccount: public BankAcc{
    public:
    SavingsAccount(int a, int b){
        Accno = a;
        balance = b;
        balance = (0.06*balance) + balance;
    }
    void display(){
        cout << Accno << endl;
        cout << balance << endl;
    }
};

class CurrentAccount: public BankAcc{
    public:
    CurrentAccount(int a, int b){
        Accno = a;
        balance = b;
        if(balance <= 50000){
        balance = balance - 10000;
    }
    }
    void display(){
        cout << Accno << endl;
        cout << balance << endl;
    }
};

int main(){

    CurrentAccount sd1(27072006,50000);
    SavingsAccount sv1(27072006,100000);
    sd1.display();
    sv1.display();
    
    return 0;
}