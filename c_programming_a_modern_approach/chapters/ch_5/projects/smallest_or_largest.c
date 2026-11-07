#include <stdio.h>

int main(void)
{
    int d1, d2, d3, d4;
    int smallest, largest;

    printf("Enter four digits: ");
    if (scanf("%d %d %d %d", &d1, &d2, &d3, &d4) != 4) {
        printf("Invalid input");
        return 1;
    }

    smallest = d1;
    largest = d1;

    if (d2 < smallest) {
        smallest = d2;
    }
    if (d2 > largest) {
        largest = d2;
    }

    if (d3 < smallest) {
        smallest = d3;
    }
    if (d3 > largest) {
        largest = d2;
    }

    if (d4 < smallest) {
        smallest = d4;
    }
    if (d4 > largest) {
        largest = d4;
    }

    printf(
        "The smallest number is: %d\nThe largest number is: %d\n",
        smallest, largest
    );

    return 0;
}