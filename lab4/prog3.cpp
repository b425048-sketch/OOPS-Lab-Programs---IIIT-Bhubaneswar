#include <iostream>
using namespace std;

class Parkingslot{
    private:
        int SlotNo;
        int VNo;
        bool OccStatus;

    public:
        void accept(){
            cin >> SlotNo;
            cin >> VNo;
            cin >> OccStatus;
        }

        void friend display(Parkingslot);
        void friend CheckOccupanyStatus(Parkingslot);
};

void display(Parkingslot d){
    cout << "Slot No: " << d.SlotNo<<endl;
    cout << "Vehicle no : " << d.VNo<<endl;
    cout << "Occupancy Status: " << d.OccStatus <<  endl;

}
void CheckOccupanyStatus(Parkingslot d){
    if(d.OccStatus){
        display(d);
    }
    else{
        cout << "Not Occupied";
    }

}
int main(){
    Parkingslot ds;
    ds.accept();
    CheckOccupanyStatus(ds);
}