#include <stdio.h>

struct Product {
    int ProductID;
    char Name[50];
    int price;
    int qty;
};

int main() {
    struct Product s;

    printf("Enter Product ID: ");
    scanf("%d", &s.ProductID);

    printf("Enter Product Name: ");
    scanf(" %[^\n]", s.Name);

    printf("Enter Price: ");
    scanf("%d", &s.price);

    printf("Enter Quantity: ");
    scanf(" %d", &s.qty);

    printf("\nProduct Details\n");
    printf("Product ID: %d\n", s.ProductID);
    printf("Product Name: %s\n", s.Name);
    printf("Price: %d\n", s.price);
    printf("Product's Quantity: %d\n", s.qty);
    printf("The Total Cost is: %d", s.price*s.qty);

    return 0;
}