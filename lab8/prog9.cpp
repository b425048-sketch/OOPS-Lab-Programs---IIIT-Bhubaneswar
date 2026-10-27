#include <iostream>
using namespace std;

class Robot {
public:
    virtual void move(double distance) {
        cout << "Robot moving" << endl;
    }
};

class WheeledRobot : public Robot {
public:
    void move(double distance) override {
        cout << "Wheeled robot time: "
             << distance / 2 << " seconds" << endl;
    }
};

class TrackedRobot : public Robot {
public:
    void move(double distance) override {
        cout << "Tracked robot time: "
             << distance / 1.2 << " seconds" << endl;
    }
};

int main() {
    WheeledRobot w;
    TrackedRobot t;

    Robot *r1 = &w;
    Robot *r2 = &t;

    double distance;
    cout << "Enter distance in metres: ";
    cin >> distance;

    r1->move(distance);
    r2->move(distance);

    return 0;
}