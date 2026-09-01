#include <iostream>
using namespace std;
//Sir, Since an Integer Cannot Take More than 10numbers at once for that it requires long long int or long it
//So for that i have just considered Normal 4 to 5 digit Number 

int main() {
    int m, n;
    cin >> m >> n;

    int **matrix = new int*[m];

    for (int i = 0; i < m; i++)
        matrix[i] = new int[n];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    int found  = 0;
    int want;
    int pos;
    cout << "Enter the Number" << endl;
    cin >> want;
    int **p = matrix;
    for(int i = 0;i<m;i++){
        if(**p == want){
            found = 1;
            pos = i;
        }
        p++;
    }
    if(found){
        cout << "The Number is Present";
    }
    else{
        cout << "The Number is Not Present";
    }

    for (int i = 0; i < m; i++)
        delete[] matrix[i];

    delete[] matrix;

    return 0;
}