#include <stdio.h>

int main(void)
{
    int i, n;

    printf("This program calculates the square root\n");
    printf("Enter a number: ");
    if (scanf("%10d", &n) != 1) {
        printf("Invalid Input\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        printf("%d: %d\n", i, i * i);
    }

    return 0;
}