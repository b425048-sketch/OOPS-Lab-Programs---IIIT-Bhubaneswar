#include <iostream>
using namespace std;

int noelements(int arr[], int n){
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum = sum + arr[i];
    }
    return sum;
}
float noelements(float arr[], int n){
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum = sum + arr[i];
    }
    return sum;
}
int noelements(int arr[], int m, int n){
    int sum = 0;
    for(int i = m;i<n;i++){
        sum = sum + arr[i];
    }
    return sum;
}
int main(){
    int arr[5];
    for(int i = 0;i<5;i++){
        cin >> arr[i];
    }
    cout << noelements(arr , 5) << endl;
    float arv[5];
    for(int i = 0;i<5;i++){
        cin >> arv[i];
    }
    cout << noelements(arv , 5) << endl;
    cout << noelements(arr , 2 , 5) << endl;
    return 0;
}