#include <iostream>
using namespace std;

int Search(int arr[], int n,int target){
    for(int i = 0;i<n;i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}
char Search(string sp, int n,char target){
    for(int i = 0;i<n;i++){
        if(sp[i] == target){
            return i;
        }
    }
    return -1;
}
int Search(int arr[], int m, int n, int target){
    for(int i = m;i<n;i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[5];
    for(int i = 0;i<5;i++){
        cin >> arr[i];
    }
    int trg;
    cin >> trg;
    cout << Search(arr , 5, trg) << endl;
    string st;
    cin >> st;
    char trgm;
    cin >> trgm;
    cout << Search(st, 5, trgm) << endl;
    cout << Search(arr , 2 , 5, trg) << endl;
    return 0;
}