#include <stdio.h>

int main(void)
{
    int i;
    float num, largest;

    largest = 0.0f;
    printf("This program returns the largest number\n");
    for (;;) {
        printf("Enter a sequence of numbers 1-by-1 (0 to cancel): ");
        if (scanf("%f", &num) != 1) {
            printf("Invalid Input\n");
            return 1;
        }

        if (num == 0.0f) {
            break;
        }

        if (largest < num) {
            largest = num;
        }
    }

    if (largest == 0.0f) {
        printf("Received no numbers\n");
        return 1;
    }
    
    printf("The largest number entered was %0.2f\n", largest);

    return 0;
}