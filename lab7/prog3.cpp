#include <iostream>
using namespace std;

class Vehicle{
    public:
    string registrationno;
    int rentaldays;
};

class Car: public Vehicle{
    public:
    int dailyrentalrate;
};

class LuxuryCar: public Car{
    public:
    int LuxuryChargePerday;
    LuxuryCar(string s, int bs, int ex, int pb){
        registrationno = s;
        rentaldays = bs;
        dailyrentalrate = ex;
        LuxuryChargePerday = pb;
    }
    void display(){
        cout << registrationno << endl;
        cout << rentaldays << endl;
        cout << dailyrentalrate << endl;
        cout << LuxuryChargePerday << endl;
    }
};

int main(){

    LuxuryCar sd1("WB238790", 170000, 5, 100000);
    sd1.display();
    int finalSal = (sd1.dailyrentalrate + sd1.LuxuryChargePerday)*sd1.rentaldays;
    cout << finalSal;
    
    return 0;
}