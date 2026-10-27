#include <iostream>
using namespace std;

class Delivery {
public:
    virtual void estimateTime(double distance) {
        cout << "Delivery time" << endl;
    }
};

class BikeDelivery : public Delivery {
public:
    void estimateTime(double distance) override {
        bool ist;
        cout << "Enter if Traffic" << endl;
        cin >> ist;
        int ans = (distance / 20) * 60;
        if(!ist){
            cout << "Bike time: " << ans + 5
                << " minutes" << endl;
        }
        else{
            cout << "Bike time: " << ans
                << " minutes" << endl;
        }
    }
};

class DroneDelivery : public Delivery {
public:
    void estimateTime(double distance) override {
        bool ist;
        cout << "Enter if Traffic" << endl;
        cin >> ist;
        int ans = (distance / 20) * 60;
        if(!ist){
            cout << "Drone time: " << ans + 2
                << " minutes" << endl;
        }
        else{
            cout << "Drone time: " << ans
                << " minutes" << endl;
        }
    }
};

int main() {
    double distance;
    cout << "Enter distance in km: ";
    cin >> distance;

    BikeDelivery b;
    DroneDelivery d;

    b.estimateTime(distance);
    d.estimateTime(distance);

    return 0;
}