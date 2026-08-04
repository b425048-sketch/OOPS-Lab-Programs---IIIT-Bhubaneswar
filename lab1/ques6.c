#include <stdio.h>

struct Distance {
    int feet;
    int inches;
};

int main() {
    struct Distance d1;
    struct Distance d2;
    struct Distance total;

    printf("Enter First Distance\n");
    printf("Feet: ");
    scanf("%d",&d1.feet);
    printf("Inches: ");
    scanf("%d",&d1.inches);

    printf("Enter Second Distance\n");
    printf("Feet: ");
    scanf("%d",&d2.feet);
    printf("Inches: ");
    scanf("%d",&d2.inches);

    total.feet = d1.feet + d2.feet;
    total.inches = d1.inches + d2.inches;
    printf("\n");
    printf("Total Distance = %d Feet %d Inches\n",
           total.feet,total.inches);

    return 0;
}