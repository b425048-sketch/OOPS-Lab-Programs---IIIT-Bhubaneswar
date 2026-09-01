#include <iostream>
using namespace std;

int main() {
    int arr[8];

    cout << "Enter 8 seat numbers: ";
    for (int i = 0; i < 8; i++)
        cin >> arr[i];

    cout << "\nBefore correction: ";
    for (int i = 0; i < 8; i++)
        cout << arr[i] << " ";

    int position, newSeat;

    cout << "\nEnter position to correct (0-7): ";
    cin >> position;

    cout << "Enter correct seat number: ";
    cin >> newSeat;

    int *p = arr;

    *(p + position) = newSeat;

    cout << "\nAfter correction: ";
    for (int i = 0; i < 8; i++)
        cout << arr[i] << " ";

    return 0;
}