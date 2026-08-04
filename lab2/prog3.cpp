#include <iostream>
using namespace std;

class Calculator{
    int num1;
    int num2;

    public:
        void Details();
        void Addition();
        void Substraction();
        void Multiplication();
        void Division();
};

void Calculator::Details(){
    cout<<"\nEnter Calculator Details\n";
    cout<<"Enter No.1\n";
    cin>>num1;
    cout<<"Enter No:2\n";
    cin>>num2;
}

void Calculator::Addition(){
    cout<<"\nAddition\n"<<num1+num2;
}
void Calculator::Substraction(){
    cout<<"\nSubstraction\n"<<num1-num2;
}
void Calculator::Multiplication(){
    cout<<"\nMultiplication\n"<<num1*num2;
}
void Calculator::Division(){
    cout<<"\nDivision\n"<<num1/num2;
}

int main(){
    Calculator s1;
    s1.Details();
    s1.Addition();
    s1.Substraction();
    s1.Division();
    s1.Multiplication();

    return 0;
}