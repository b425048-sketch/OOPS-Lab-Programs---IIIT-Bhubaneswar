#include <iostream>
using namespace std;

void display(int x)
{
    cout << x << endl;
}

void display(float x)
{
    cout << x << endl;
}

void display(char x)
{
    cout << x << endl;
}

void display(int a[], int n)
{
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << endl;
}

void display(char a[], int n)
{
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << endl;
}

int main()
{
    int a[] = {1, 2, 3, 4};
    char b[] = {'a', 'b', 'c'};

    display(10);
    display(10.2f);
    display('A');
    display(a, 4);
    display(b, 3);

    return 0;
}