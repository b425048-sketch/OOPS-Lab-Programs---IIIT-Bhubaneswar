#include <iostream>
using namespace std;

class Distance {
    int feet, inches;

public:
    void input() {
        cout << "Enter Feet and Inches: ";
        cin >> feet >> inches;
    }

    void add(Distance d1, Distance d2) {
        inches = d1.inches + d2.inches;
        feet = d1.feet + d2.feet;

        if (inches >= 12) {
            feet += inches / 12;
            inches %= 12;
        }
    }

    void display() {
        cout << feet << " Feet " << inches << " Inches" << endl;
    }
};

int main() {
    Distance d1, d2, d3;

    cout << "First Distance\n";
    d1.input();

    cout << "Second Distance\n";
    d2.input();

    d3.add(d1, d2);

    cout << "Total Distance = ";
    d3.display();

    return 0;
}