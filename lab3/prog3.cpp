#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int* arr = new int[n];

    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    int max = -1000;
    for(int i = 0;i<n;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout << "The Greatest is: "<<max;
    delete arr;
    arr = nullptr;
    return 0;
}