#include <iostream>
using namespace std;

int compare(int a, int b)
{
    return a > b ? a : b;
}

float compare(float a, float b)
{
    return a > b ? a : b;
}

bool compare(int a[], int b[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] != b[i])
            return false;
    }

    return true;
}

int main()
{
    int a[3];
    int b[3];
    for(int i = 0;i<3;i++){
        cin >> a[i];
    }
    for(int i = 0;i<3;i++){
        cin >> b[i];
    }

    int ab,cd;
    float ed,gh;
    cin >> ab >> cd >> ed >> gh;

    cout << compare(ab, cd) << endl;
    cout << compare(ed , gh) << endl;

    if(compare(a, b, 3))
        cout << "Identical" << endl;
    else
        cout << "Not Identical" << endl;

    return 0;
}