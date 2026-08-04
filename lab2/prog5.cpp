#include <iostream>
using namespace std;

class Employee {
    int id;
    char name[50];
    float basic, hra, da, gross;

public:
    void input() {
        cout << "Enter Employee ID: ";
        cin >> id;

        cout << "Enter Name: ";
        cin>>name;

        cout << "Enter Basic Salary: ";
        cin >> basic;
    }

    void calculate() {
        hra = basic * 0.20;
        da = basic * 0.10;
        gross = basic + hra + da;
    }

    void display() {
        cout << "HRA = " << hra << endl;
        cout << "DA = " << da << endl;
        cout << "Gross Salary = " << gross << endl;
    }
};



int main() {
    Employee e;
    e.input();
    e.calculate();
    e.display();
    return 0;
}