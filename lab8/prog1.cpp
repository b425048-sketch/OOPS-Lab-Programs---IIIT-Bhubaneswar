#include <iostream>
using namespace std;

class Character {
public:
    virtual void attack() {
        cout << "Character attacks" << endl;
    }
};

class Warrior : public Character {
public:
    int strength = 10;

    void attack() override {
        cout << "Warrior damage: " << 20 + 2 * strength << endl;
    }
};

class Archer : public Character {
public:
    int agility = 10;

    void attack() override {
        cout << "Archer damage: " << 15 + 3 * agility << endl;
    }
};

int main() {
    Warrior w;
    Archer a;

    w.attack();
    a.attack();

    return 0;
}