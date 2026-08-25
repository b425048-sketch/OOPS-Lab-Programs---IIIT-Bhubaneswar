#include <iostream>
using namespace std;

int count(int n)
{
    int c = 0;

    if(n == 0)
        return 1;

    while(n != 0)
    {
        n /= 10;
        c++;
    }

    return c;
}

int count(int a[], int n)
{
    return n;
}

int count(char a[], int n, char x)
{
    int c = 0;

    for(int i = 0; i < n; i++)
    {
        if(a[i] == x)
            c++;
    }

    return c;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    char b[] = {'a', 'b', 'a', 'c', 'a'};

    cout << count(12345) << endl;
    cout << count(a, 5) << endl;
    cout << count(b, 5, 'a') << endl;

    return 0;
}