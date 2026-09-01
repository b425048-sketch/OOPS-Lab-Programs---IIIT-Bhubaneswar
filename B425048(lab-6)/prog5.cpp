#include <iostream>
using namespace std;

void Status(int *Status){
    int x = *Status;
    if(*Status == 1){
        *Status = 2;
    }
    else if(*Status == 2){
        *Status = 3;
    }
    else if(*Status == 3){
        *Status = 1;
    }
    cout << "The Status Changed from " << x  << "to" << *Status;
}

int main(){
    cout << "The Status here is :-" << endl;
    cout << "1 -> Processing" << endl;
    cout << "2-> Shipped"<< endl;
    cout << "3 -> Delivered" << endl;

    int z;
    cout << "Give Current Status Code" << endl;
    cin >> z;
    int *p = &z;
    Status(p);
}