#include <iostream>
using namespace std;

class Counter {
    int value;

public:
    Counter(int v = 0) {
        value = v;
    }

    Counter operator++() {
        ++value;
        return *this;
    }

    Counter operator++(int) {
        value++;
        return *this;
    }

    void display() {
        cout << value;
    }
};

int main() {
    Counter c(5);

    cout << "Before prefix: ";
    c.display();

    ++c;

    cout << "\nAfter prefix: ";
    c.display();

    cout << "\nBefore postfix: ";
    c.display();

    c++;

    cout << "\nAfter postfix: ";
    c.display();

    return 0;
}