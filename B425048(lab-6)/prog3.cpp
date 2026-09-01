#include <iostream>
using namespace std;

int main() {
    int arr[6];

    cout << "Enter 6 equipment IDs: ";
    for (int i = 0; i < 6; i++)
        cin >> arr[i];

    int *p = arr;

    cout << "\nEquipment IDs and Addresses:\n";

    for (int i = 0; i < 6; i++) {
        cout << "ID:- " << *p << "Address:- " << p << endl; 
        p++;
    }

    return 0;
}