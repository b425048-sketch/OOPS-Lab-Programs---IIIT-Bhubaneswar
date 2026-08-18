#include <iostream>
using namespace std;

class Exam {
private:
    string student;
    string subject;
    float marks;
    float maxMarks;

public:
    Exam() {
        cin >> student;
        cin >> subject;
        cin >> marks;
        cin >> maxMarks;
    }

    friend class Result;
};

class Result {
public:
    void display(Exam e) {
        float percentage = (e.marks / e.maxMarks) * 100;

        cout << "Student: " << e.student << endl;
        cout << "Subject: " << e.subject << endl;
        cout << "Marks: " << e.marks << "/" << e.maxMarks << endl;
        cout << "Percentage: " << percentage << "%" << endl;

        if (percentage >= 40)
            cout << "Pass" << endl;
        else
            cout << "Fail" << endl;
    }
};

int main() {
    Exam e;

    Result r;
    r.display(e);

    return 0;
}