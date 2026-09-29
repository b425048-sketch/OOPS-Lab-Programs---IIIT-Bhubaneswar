#include <iostream>
using namespace std;

class Student {
    string name;
    int marks;

public:
    Student(string n, int m) {
        name = n;
        marks = m;
    }

    bool operator>(Student s) {
        return marks > s.marks;
    }

    void display() {
        cout << name << " has higher marks.";
    }
};

int main() {
    Student s1("Sarthak", 85);
    Student s2("Rahul", 78);

    if (s1 > s2)
        s1.display();
    else
        s2.display();

    return 0;
}