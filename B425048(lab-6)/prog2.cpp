#include <iostream>
using namespace std;

int main() {
    int Waterlevel;
    cout << "Enter Waterlevel: ";
    cin >> Waterlevel;

    int *p = &Waterlevel;

    cout << "Current Waterlevel: " << *p << "%" << endl;

    cout << "Enter Level Up Amount: ";
    int charge;
    cin >> charge;

    *p = *p + charge;

    if (*p > 100)
        *p = 100;

    cout << "Updated Waterlevel: " << *p << "%" << endl;

    cout << "Enter Level Down Amount: ";
    int charg;
    cin >> charg;

    *p = *p - charg;

    if (*p < 0)
        *p = 0;

    cout << "Updated Waterlevel: " << *p << "%" << endl;
    return 0;
}