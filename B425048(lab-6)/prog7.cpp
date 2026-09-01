#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char str[200];

    cout << "Enter a sentence: ";
    cin.getline(str, 200);
    
    char *p = str;
    int digits = 0;
    int alphabets = 0;
    int spaces = 0;

    while (*p != '\0') {
        if (isdigit(*p))
            digits++;
        else if (isalpha(*p))
            alphabets++;
        else if (*p == ' ')
            spaces++;

        p++;
    }

    cout << "Digits: " << digits << endl;
    cout << "Alphabetic characters: " << alphabets << endl;
    cout << "Spaces: " << spaces << endl;

    return 0;
}