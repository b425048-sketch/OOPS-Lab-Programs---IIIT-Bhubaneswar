#include <iostream>
using namespace std;

class IrrigationSystem {
public:
    virtual void calculateWater(double moisture) {
        cout << "Calculating water" << endl;
    }
};

class DripIrrigation : public IrrigationSystem {
public:
    void calculateWater(double moisture) override {
        cout << "Drip water: "
             << 2 * (100 - moisture) << " litres" << endl;
    }
};

class SprinklerIrrigation : public IrrigationSystem {
public:
    void calculateWater(double moisture) override {
        cout << "Sprinkler water: "
             << 3 * (100 - moisture) << " litres" << endl;
    }
};

int main() {
    double moisture;
    cout << "Enter soil moisture (0-100): ";
    cin >> moisture;

    DripIrrigation d;
    SprinklerIrrigation s;

    d.calculateWater(moisture);
    s.calculateWater(moisture);

    return 0;
}