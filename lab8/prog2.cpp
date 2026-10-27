#include <iostream>
using namespace std;

class ParkingSlot {
public:
    virtual void Fair(int a) {
        cout << "The Total fees is" << endl;
    }
};

class TwoWheelerSlot : public ParkingSlot {
public:
    int strength = 10;

    void Fair(int b) override {
        int sum = 10*b;
        if(b > 5){
            sum = sum - (sum*0.1);
        }
        cout << "TwoWheelerSlot Price: " << sum << endl;
    }
};

class FourWheelerSlot : public ParkingSlot {
public:

    void Fair(int c) override {
        int sum = 30*c;
        if(c > 5){
            sum = sum - (sum*0.1);
        }
        cout << "FourWheelerSlot Price: " << sum << endl;
    }
};

int main() {
    TwoWheelerSlot w;
    FourWheelerSlot a;

    w.Fair(5);
    a.Fair(6);

    return 0;
}