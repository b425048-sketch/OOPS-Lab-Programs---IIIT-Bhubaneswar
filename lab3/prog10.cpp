#include <iostream>
using namespace std;

class Employee {
    int id;
    string name;
    float basicSalary;
    float *earnings;
    int months;

public:
    void accept() {
        cin >> id;
        cin >> name;
        cin >> basicSalary;
        cin >> months;

        earnings = new float[months];

        for (int i = 0; i < months; i++)
            cin >> earnings[i];
    }

    void display() {
        float total = 0;
        int highestMonth = 0;

        for (int i = 0; i < months; i++) {
            total += earnings[i];

            if (earnings[i] > earnings[highestMonth])
                highestMonth = i;
        }

        float average = total / months;

        cout << "Employee ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Total Earnings: " << total << endl;
        cout << "Average Earnings: " << average << endl;
        cout << "Highest Earning Month: " << highestMonth + 1 << endl;
        cout << "Highest Earning: " << earnings[highestMonth] << endl;

        delete[] earnings;
    }
};

int main() {
    Employee e;

    e.accept();
    e.display();

    return 0;
}