#include <iostream>
using namespace std;

int maximum(int a, int b)
{
    return a > b ? a : b;
}

int maximum(int *a, int *b)
{
    return *a > *b ? *a : *b;
}

int maximum(int *a, int n)
{
    int max = a[0];

    for(int i = 1; i < n; i++)
    {
        if(a[i] > max)
            max = a[i];
    }

    return max;
}

int main()
{
    int a,b;
    cin >> a >> b;
    int arr[4];
    for(int i = 0; i < 4;i++){
        cin >> arr[i];
    }

    cout << maximum(a, b) << endl;
    cout << maximum(&a, &b) << endl;
    cout << maximum(arr, 4) << endl;

    return 0;
}