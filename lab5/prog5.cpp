#include <iostream>
using namespace std;

int modify(int a, int x)
{
    return a + x;
}

float modify(float a, float x)
{
    return a + x;
}

void modify(int *a, int x)
{
    *a = *a + x;
}

int main()
{
    int a;
    float b;
    int c;

    cin >> a >> b >> c;

    cout << a << " " << modify(a, 5) << endl;
    cout << b << " " << modify(b, 5.5) << endl;

    cout << c << " ";
    modify(&c, 10);
    cout << c << endl;

    return 0;
}