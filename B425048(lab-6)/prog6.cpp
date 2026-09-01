#include <iostream>
using namespace std;

void Longest(int *p, int z){
    int max = -100000;
    for(int i = 0;i < z;i++){
        if(*p > max){
            max = *p;
        }
        p++;
    }
    cout << "The Longest Episode is of " << max << "Minutes" << endl;
}

int main() {
    int arr[6];

    cout << "Enter 6 Episodes Duration: ";
    for (int i = 0; i < 6; i++)
        cin >> arr[i];

    int *p = arr;

    cout << "\nEquipment IDs and Addresses:\n";

    for (int i = 0; i < 6; i++) {
        cout << "ID:- " << *p << "Address:- " << p << endl; 
        p++;
    }

    Longest(arr , 6);

    return 0;
}