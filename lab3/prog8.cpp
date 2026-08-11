#include <iostream>
using namespace std;

class Student {
    int roll;
    string name;
    int subjects;
    float *marks;

public:
    void accept() {
        cin >> roll;
        cin >> name;
        cin >> subjects;

        marks = new float[subjects];

        for (int i = 0; i < subjects; i++)
            cin >> marks[i];
    }

    void display() {
        float total = 0;

        for (int i = 0; i < subjects; i++)
            total += marks[i];

        float average = total / subjects;

        cout << "Roll Number: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Total: " << total << endl;
        cout << "Average: " << average << endl;

        delete[] marks;
    }
};

int main() {
    Student s;

    s.accept();
    s.display();

    return 0;
}