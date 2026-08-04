#include <iostream>
using namespace std;

class BankAccount {
    int accNo;
    char name[50];
    float balance;

public:
    void input();

    void deposit();

    void withdraw();

    void display();
};

void BankAccount::input(){
        cout << "Enter Account Number: ";
        cin >> accNo;

        cout << "Enter Name: ";
        cin>>name;

        cout << "Enter Balance: ";
        cin >> balance;
    }

void BankAccount::deposit(){
        float amt;
        cout << "Enter Deposit Amount: ";
        cin >> amt;
        balance += amt;
}

void BankAccount::withdraw(){
        float amt;
        cout << "Enter Withdraw Amount: ";
        cin >> amt;

        if (amt <= balance)
            balance -= amt;
        else
            cout << "Insufficient Balance\n";
}

void BankAccount::display(){
        cout << "\nAccount Number: " << accNo << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
}

int main() {
    BankAccount b;
    b.input();
    b.deposit();
    b.withdraw();
    b.display();
    return 0;
}