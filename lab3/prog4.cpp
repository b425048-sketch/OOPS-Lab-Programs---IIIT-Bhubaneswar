#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    float* arr = new float[n];

    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    int sum = 0;
    for(int i = 0;i<n;i++){
        sum = sum + arr[i];
    }
    int avg = sum / n;
    cout<<"The Sum is: "<<sum<<endl;
    cout<<"The Avg is: "<<avg;
    delete arr;
    arr = nullptr;
    return 0;
}