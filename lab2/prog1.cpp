#include <iostream>
using namespace std;

class Student{
    int rollno;
    char Name[50];
    int marks;

    public:
        void Input();
        void Output();
};

void Student::Input(){
    cout<<"\nEnter Student Details\n";
    cout<<"Enter Roll No.\n";
    cin>>rollno;
    cout<<"Enter Name:\n";
    cin>>Name;
    cout<<"Enter marks:\n";
    cin>>marks;
}

void Student::Output(){
    cout<<rollno;
    cout<<Name;
    cout<<marks;
}

int main(){
    Student s1;
    s1.Input();
    s1.Output();

    return 0;
}