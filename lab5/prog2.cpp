#include <iostream>
using namespace std;

int cmp(int a, int b){
    return a > b ? a : b;
}
float cmp(float a, float b){
    return a > b ? a : b;
}
int cmp(int a, int b, int c){
    int x = a > b ? a : b;
    return x > c ? x : c;
}
int main(){
    int x,y,z;
    cin >> x >> y >> z;
    cout << cmp(x , y) << endl;
    cout << cmp(x, y, z) << endl;
    float m,n;
    cin >> m >> n;
    cout << cmp(m, n) << endl;
    return 0;
}