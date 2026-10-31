#include <stdio.h>

#define NUMBERS_BUFF 3

int main(void)
{
    int i;
    int numbers[NUMBERS_BUFF];

    printf("Enter a three digit number: ");
    
    for (i = 0; i < NUMBERS_BUFF; i++) {
        if (scanf("%1d", &numbers[i]) != 1 || 
        numbers[i] < 0 || numbers[i] > 9) 
        {
            printf("Please enter 3 digits > 0 and < 9");
            return -1;
        }
    }

    for (i = 2; i >= 0; i--) {
        printf("%d", numbers[i]);
    }

    printf("\n");
    return 0;
}