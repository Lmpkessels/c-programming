#include <stdio.h>

int main(void)
{
    int n = 1;
    long sum;
    
    printf("This program sums up a series of integers.\n");
    
    printf("Enter a serie of integers (0 to terminate): ");
    while (n != 0) {
        if (scanf("%d", &n) != 1) {
            printf("Invalid Input\n");
            return 1;
        }
        sum += n;
    }

    printf("The sum is %ld\n", sum);

    return 0;
}
