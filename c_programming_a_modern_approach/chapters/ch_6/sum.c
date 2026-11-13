#include <stdio.h>

int main(void)
{
    int n, sum;

    printf("This program sums up a series of numbers\n");
    printf("Enter a series of numbers (0 to terminate): ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid Input");
        return 1;
    }

    while (n != 0) {
        sum += n;
        if (scanf("%d", &n) != 1) {
            printf("Invalid Input");
            return 1;
        }

    }

    printf("The sum is %d\n", sum);
    
    return 0;
}