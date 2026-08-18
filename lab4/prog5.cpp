#include <iostream>
using namespace std;

class FoodOrder {
private:
    int orderID;
    string food;
    int quantity;
    float price;

public:
    FoodOrder(int id, string f, int q, float p) {
        orderID = id;
        food = f;
        quantity = q;
        price = p;
    }

    friend void calculateBill(FoodOrder f);
};

void calculateBill(FoodOrder f) {
    float total = f.quantity * f.price;

    cout << "Order ID: " << f.orderID << endl;
    cout << "Food: " << f.food << endl;
    cout << "Quantity: " << f.quantity << endl;
    cout << "Price: " << f.price << endl;
    cout << "Total Bill: " << total << endl;
}

int main() {
    FoodOrder f(101, "Pizza", 2, 250);

    calculateBill(f);

    return 0;
}