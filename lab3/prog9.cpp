#include <iostream>
using namespace std;

class Product {
    int id;
    string name;
    float price;
    int quantity;

public:
    void accept() {
        cin >> id;
        cin >> name;
        cin >> price;
        cin >> quantity;
    }

    void display() {
        cout << id << " " << name << " " << price << " " << quantity << endl;
    }

    float cost() {
        return price * quantity;
    }
};

int main() {
    int n;
    cin >> n;

    Product *p = new Product[n];

    for (int i = 0; i < n; i++)
        p[i].accept();

    float total = 0;

    for (int i = 0; i < n; i++) {
        p[i].display();
        total += p[i].cost();
    }

    cout << "Total Amount: " << total << endl;

    delete[] p;

    return 0;
}