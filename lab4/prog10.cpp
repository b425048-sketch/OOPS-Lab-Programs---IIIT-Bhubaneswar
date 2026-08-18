#include <iostream>
using namespace std;

class SmartDevice {
private:
    string name;
    string type;
    bool power;

public:
    SmartDevice() {
        cin >> name;
        cin >> type;
        cin >> power;
    }

    friend class HomeController;
};

class HomeController {
public:
    void display(SmartDevice d) {
        cout << "Device Name: " << d.name << endl;
        cout << "Device Type: " << d.type << endl;

        if (d.power)
            cout << "Power: ON" << endl;
        else
            cout << "Power: OFF" << endl;
    }

    void turnOn(SmartDevice &d) {
        d.power = true;
    }

    void turnOff(SmartDevice &d) {
        d.power = false;
    }

    void status(SmartDevice d) {
        if (d.power)
            cout << "Power is ON" << endl;
        else
            cout << "Power is OFF" << endl;
    }
};

int main() {
    SmartDevice d;

    HomeController h;

    h.display(d);

    h.turnOn(d);
    h.status(d);

    return 0;
}