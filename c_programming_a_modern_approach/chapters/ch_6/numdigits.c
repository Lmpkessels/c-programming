#include <stdio.h>

int main(void)
{
    int n, temp;
    int digits;

    printf("This program counts the numbers in a digit\n");
    printf("Enter a non-negative number: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid Input");
        return 1;
    }

    temp = n;
    digits = 0;
    do {
        temp /= 10;
        digits++;
    } while (temp > 0);

    printf("The number %d contains %d numbers.\n", n, digits);

    return 0;
}