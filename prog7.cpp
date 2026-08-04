#include <iostream>
using namespace std;

class Product {
    int id, quantity;
    string name;
    float price;

public:
    void input() {
        cout << "Enter Product ID: ";
        cin >> id;

        cout << "Enter Product Name: ";
        getline(cin, name);

        cout << "Enter Quantity: ";
        cin >> quantity;

        cout << "Enter Price: ";
        cin >> price;
    }

    void sell() {
        int sold;
        cout << "Enter Quantity Sold: ";
        cin >> sold;

        if (sold <= quantity)
            quantity -= sold;
        else
            cout << "Not Enough Stock\n";
    }

    void display() {
        cout << "Product ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Inventory Value = " << quantity * price << endl;
    }
};

int main() {
    Product p;
    p.input();
    p.sell();
    p.display();
    return 0;
}