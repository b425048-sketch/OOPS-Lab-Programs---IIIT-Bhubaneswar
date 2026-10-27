#include <iostream>
#include <cmath>
using namespace std;

class MatchFormat {
public:
    virtual void calculateTarget(int score) {
        cout << "Calculating target" << endl;
    }
};

class T20Match : public MatchFormat {
public:
    void calculateTarget(int score) override {
        int margin = ceil(score * 0.01);
        cout << "T20 target: " << score + margin << endl;
    }
};

class ODIMatch : public MatchFormat {
public:
    void calculateTarget(int score) override {
        int margin = ceil(score * 0.02);
        cout << "ODI target: " << score + margin << endl;
    }
};

int main() {
    int score;
    cout << "Enter first innings score: ";
    cin >> score;

    T20Match t;
    ODIMatch o;

    t.calculateTarget(score);
    o.calculateTarget(score);

    return 0;
}