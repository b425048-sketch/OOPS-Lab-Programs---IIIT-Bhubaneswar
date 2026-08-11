#include <iostream>
using namespace std;

class Student{
    int Rollno;
    string Name;
    int marks;

    public:
        void accept(){
            cin >> Rollno;
            cin >> Name;
            cin >> marks;
        }

        void display(){
            cout<<"Name: "<<Name<<endl;
            cout<<"Rollno: "<<Rollno<<endl;
            cout<<"Marks: "<<marks<<endl;
        }
};

int main(){
    Student *s = new Student;

    s->accept();
    s->display();

    delete s;
    s = nullptr;
    return 0;
}