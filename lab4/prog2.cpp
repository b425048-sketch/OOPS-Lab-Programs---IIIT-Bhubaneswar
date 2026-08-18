#include <iostream>
using namespace std;

class Mobile{
    private:
        string BrandName;
        string Model;
        float BatteryPercent;

    public:
        void accept(){
            cin >> BrandName;
            cin >> Model;
            cin >> BatteryPercent;
        }

        void friend display(Mobile);
        void friend CheckBattery(Mobile);
};

void display(Mobile d){
    cout << "Brand Name: " << d.BrandName<<endl;
    cout << "Model : " << d.Model<<endl;
    cout << "Battery Percent: " << d.BatteryPercent << "%" <<  endl;

}
void CheckBattery(Mobile d){
    if(d.BatteryPercent < 20){
        cout << "Low Battery"<<endl;
    }
    else{
        cout << "Normal Battery";
    }

}
int main(){
    Mobile ds;
    ds.accept();
    display(ds);
    CheckBattery(ds);
}