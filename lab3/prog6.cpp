#include <iostream>
using namespace std;

class Employee{
    int ID;
    string EName;
    int Salary;

    public:
        void accept(){
            cin >> ID;
            cin >> EName;
            cin >> Salary;
        }

        void display(){
            cout<<"EName: "<<EName<<endl;
            cout<<"ID: "<<ID<<endl;
            cout<<"Salary: "<<Salary<<endl;
        }
};

int main(){
    Employee *s = new Employee;

    s->accept();
    s->display();

    delete s;
    s = nullptr;
    return 0;
}