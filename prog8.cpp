#include <iostream>
using namespace std;

class LibraryBook {
    int id, days;
    string title, student;
    float fine;

public:
    void input() {
        cout << "Enter Book ID: ";
        cin >> id;

        cout << "Enter Book Title: ";
        getline(cin, title);

        cout << "Enter Student Name: ";
        getline(cin, student);

        cout << "Enter Days Issued: ";
        cin >> days;
    }

    void calculateFine() {
        if (days > 15)
            fine = (days - 15) * 2;
        else
            fine = 0;
    }

    void display() {
        cout << "Book Title: " << title << endl;
        cout << "Student Name: " << student << endl;
        cout << "Fine = " << fine << endl;
    }
};

int main() {
    LibraryBook b;
    b.input();
    b.calculateFine();
    b.display();
    return 0;
}