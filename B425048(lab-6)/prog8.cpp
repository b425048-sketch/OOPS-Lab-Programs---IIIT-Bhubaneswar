#include <iostream>
using namespace std;

void Longest(int *p, int z){
    int *qp = p;
    for(int i = 0;i < z;i++){
        *p = *p + 5;
        p++;
    }

    for (int i = 0; i < z; i++) {
        cout << "ID:- " << *qp << "Address:- " << qp << endl; 
        qp++;
    }

}

int main() {
    int n;
    cin >> n;
    int arr[n];

    cout << "Enter" <<  n << "Episodes Duration: " <<endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int *p = arr;

    cout << "\nMarks and Addresses:\n";

    for (int i = 0; i < n; i++) {
        cout << "Marks:- " << *p << "Address:- " << p << endl; 
        p++;
    }

    Longest(arr , n);

    return 0;
}