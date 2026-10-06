#include <iostream>
using namespace std;

class Patient {
protected:
    string patientName;
    int patientID;
    int age;

public:
    Patient(string n, int id, int a) {
        patientName = n;
        patientID = id;
        age = a;
    }
};

class InPatient : public Patient {
private:
    float roomCharges;
    int days;

public:
    InPatient(string n, int id, int a, float charge, int d)
        : Patient(n, id, a) {
        roomCharges = charge;
        days = d;
    }

    void display() {
        float total = roomCharges * days;

        cout << "Patient Name: " << patientName << endl;
        cout << "Patient ID: " << patientID << endl;
        cout << "Age: " << age << endl;
        cout << "Room Charges per Day: " << roomCharges << endl;
        cout << "Number of Days: " << days << endl;
        cout << "Total Hospital Bill: " << total << endl;
    }
};

int main() {
    InPatient p("Rahul", 101, 25, 3000, 5);

    p.display();

    return 0;
}