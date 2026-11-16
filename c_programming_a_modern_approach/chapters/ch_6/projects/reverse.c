#include <stdio.h>

int main(void)
{
    int n, reversed;

    printf("This program reverses a number.\n");
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid Input");
        return 1;
    }

    reversed = 0;

    do {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    } while (n != 0);

    printf("%d", reversed);

    return 0;
}