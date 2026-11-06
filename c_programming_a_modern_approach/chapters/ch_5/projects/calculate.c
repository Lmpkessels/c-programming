#include <stdio.h>

int main(void)
{
    printf("Enter a number between 1-10000: ");

    int number;

    if ((scanf("%d", &number) != 1) || 
        number < 0 || number > 10000
    ) 
    {
        printf("Invalid input\n");
        return 1;
    }

    if (number > 0 && number < 10) {
        printf("Number %d has 1 digits\n", number);
    } else if (number > 9 && number < 100) {
        printf("Number %d has 2 digits\n", number);
    } else if (number > 99 && number < 1000) {
        printf("Number %d has 3 digits\n", number);
    } else if (number > 999 && number < 10000) {
        printf("Number %d has 4 digits\n", number);
    } else {
        printf("Number %d has 5 digits\n", number);
    }

    return 0;
}