#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter a number between 0 and 32767: ");

    if (scanf("%d", &number) != 1 || number < 0 || number > 32767) {
        printf("Invalid input (number must be > 0 and < 32767)");
        return 1;
    }

    printf("%o\n", number);

    return 0;
}