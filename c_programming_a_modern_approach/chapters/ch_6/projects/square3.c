#include <stdio.h>

int main(void)
{
    int i, n, odd, square;

    printf("This program prints a table of squares\n");
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid Input");
        return 1;
    }

    odd = 3;

    for (i = 1, square = 1; i <= n; odd += 2, i++) {
        printf("%10d%10d\n", i, square);
        square += odd;
    }

    return 0;
}