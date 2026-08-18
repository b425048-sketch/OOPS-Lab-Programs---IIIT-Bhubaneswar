#include <iostream>
using namespace std;

class Door {
private:
    int doorNumber;
    bool locked;

public:
    Door(int n, bool l) {
        doorNumber = n;
        locked = l;
    }

    friend class SecuritySystem;
};

class SecuritySystem {
public:
    void checkDoor(Door d) {
        cout << "Door Number: " << d.doorNumber << endl;

        if (d.locked)
            cout << "Locked" << endl;
        else
            cout << "Unlocked" << endl;
    }
};

int main() {
    Door d(101, true);

    SecuritySystem s;
    s.checkDoor(d);

    return 0;
}