#include <stdio.h>

int main(void)
{
    int i;

    printf("This program counts down to zero\n");
    printf("Enter a number: ");
    if (scanf("%d", &i) != 1) {
        printf("Invalid Input");
        return 1;
    }

    do {
        printf("%d\n", i);
        i--;
    } while (i > 0);
}