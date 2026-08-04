#include <stdio.h>

struct Book {
    int BookID;
    char Title[50];
    int price;
    char Author[50];
};

int main() {
    struct Book s;

    printf("Enter Book ID: ");
    scanf("%d", &s.BookID);

    printf("Enter Title: ");
    scanf(" %[^\n]", s.Title);

    printf("Enter Price: ");
    scanf("%d", &s.price);

    printf("Enter Author's Name: ");
    scanf(" %[^\n]", s.Author);

    printf("\nBook Details\n");
    printf("Book ID: %d\n", s.BookID);
    printf("Title: %s\n", s.Title);
    printf("Price: %d\n", s.price);
    printf("Author's Name: %s", s.Author);

    return 0;
}