#include <stdio.h>

struct Rectangle {
    float length;
    float breadth;
};

int main() {
    struct Rectangle s;

    printf("Enter length: ");
    scanf("%f", &s.length);

    printf("Enter breadth: ");
    scanf("%f", &s.breadth);

    printf("\nRectangle Details\n");
    printf("Area: %.2f\n", s.length*s.breadth);
    printf("Perimeter: %.2f", 2*(s.breadth+s.length));

    return 0;
}