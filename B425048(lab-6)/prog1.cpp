#include <iostream>
using namespace std;

int main() {
    int battery;
    cout << "Enter battery percentage: ";
    cin >> battery;

    int *p = &battery;

    cout << "Current battery: " << *p << "%" << endl;

    cout << "Enter charging percentage: ";
    int charge;
    cin >> charge;

    *p = *p + charge;

    if (*p > 100)
        *p = 100;

    cout << "Updated battery: " << *p << "%" << endl;

    return 0;
}