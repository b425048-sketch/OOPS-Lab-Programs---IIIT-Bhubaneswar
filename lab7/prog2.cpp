#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    int rollno;
    int marks;
    Student(){
        marks = 90;
    }
    void calculateresult(){
        cout << marks << endl;
    }
};

class NormalStudent: public Student{
    public:
    void calculateresult(){
        cout << marks << endl;;
    }
    NormalStudent(string s, int r, int m){
        name = s;
        rollno = r;
        marks = m;
    }
};

class ScholarshipStudent: public Student{
    public:
    void calculateresult(){
        marks += 5;
        cout << marks;
    }
    ScholarshipStudent(string s, int r, int m){
        name = s;
        rollno = r;
        marks = m;
    }
};

int main(){

    NormalStudent Nd1("Pratyush" , 83 , 90);
    ScholarshipStudent ss1("Sarthak" , 48, 95);
    Nd1.calculateresult();
    ss1.calculateresult();
    
    return 0;
}