#include <iostream>
using namespace std;

class Product {
    string name;
    float price;
    int quantity;

public:
    Product(string n, float p, int q) {
        name = n;
        price = p;
        quantity = q;
    }

    Product operator+(Product p) {
        if (name == p.name && price == p.price) {
            return Product(name, price, quantity + p.quantity);
        }

        cout << "Products cannot be combined." << endl;
        return *this;
    }

    bool operator>(Product p) {
        return price * quantity > p.price * p.quantity;
    }

    void display() {
        cout << "Product: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Total Value: " << price * quantity << endl;
    }
};

int main() {
    Product p1("Book", 200, 2);
    Product p2("Book", 200, 3);

    Product p3 = p1 + p2;

    cout << "After Addition:" << endl;
    p3.display();

    if (p1 > p2)
        cout << "\nProduct 1 has higher total value.";
    else if (p2 > p1)
        cout << "\nProduct 2 has higher total value.";
    else
        cout << "\nBoth products have equal total value.";

    return 0;
}