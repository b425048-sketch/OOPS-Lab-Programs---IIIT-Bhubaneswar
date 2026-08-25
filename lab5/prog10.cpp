#include <iostream>
using namespace std;

int process(int a, int b)
{
    return a + b;
}

float process(int a, float b)
{
    return a + b;
}

float process(float a, float b)
{
    return a + b;
}

int process(int a[], int n)
{
    int sum = 0;

    for(int i = 0; i < n; i++)
        sum += a[i];

    return sum;
}

int process(int *a, int *b)
{
    return *a + *b;
}

int main()
{
    int a,b;
    cin >> a >> b;
    float x,y;
    cin >> x >> y;
    int arr[5];
    for(int i = 0;i<5;i++){
        cin >> arr[i];
    }

    cout << process(a, b) << endl;
    cout << process(a, x) << endl;
    cout << process(x, y) << endl;
    cout << process(arr, 5) << endl;
    cout << process(&a, &b) << endl;

    return 0;
}