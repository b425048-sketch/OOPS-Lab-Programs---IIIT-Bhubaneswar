#include <iostream>
using namespace std;

int add(int a, int b){
    cout << a+b << endl;
    cout << a-b << endl;
    cout << a*b << endl;
    cout << a/b << endl;
}
int add(int a, int b,int c){
    cout << a+b+c << endl;
    cout << a-b-c << endl;
    cout << a*b*c << endl;
    cout << (a/b)/c << endl;
}
float add(float a, float b){
    cout << a+b << endl;
    cout << a-b << endl;
    cout << a*b << endl;
    cout << a/b << endl;
}
int main(){
    int x,y,z;
    cin >> x >> y >> z;
    add(x , y);
    add(x, y, z);
    float m,n;
    cin >> m >> n;
    add(m, n);
    return 0;
}