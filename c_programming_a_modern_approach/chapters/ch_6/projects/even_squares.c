#include <stdio.h>

int main(void)
{
    int i, n, square;

    printf("This program prints the even squares of the number n\n");
    printf("Enter a number (n): ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid Input");
        return 1;
    }

    for (i = 1; i < n; i++) {
        square = i * i;
        
        if (square > n) {
            break;
        }

        if (square % 2 == 0) {
            printf("%d\n", square);
        }
    }

    return 0;
}