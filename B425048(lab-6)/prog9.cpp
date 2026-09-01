#include <iostream>
using namespace std;

int main(){
    cout <<"Enter the Table Size:-" << endl;
    int n;
    cin >> n;
    int* arr = new int[n];

    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int *p = arr;
    int min = 10000;
    for(int i = 0;i<n;i++){
        if(*p < min){
            min = *p;
        }
        p++;
    }
    cout << "The Smallest Table Number is " << min;
    delete[] arr;
    arr = nullptr;
    return 0;
}