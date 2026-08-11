#include <iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int* ar = new int;
    *ar = n;
    cout<<*ar;
    delete ar;
    ar = nullptr;
    return 0;
}