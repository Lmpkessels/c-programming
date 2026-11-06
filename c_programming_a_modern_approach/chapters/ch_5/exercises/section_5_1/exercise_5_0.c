#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input");
        return -1;
    }

    // This is legal but it doesnt work as expected
    // it works like (n >= 1) <= 10, so it evaluate the boolean value of (n >= 1)
    // against <= 10
    if (n >= 1 <= 10) {
        printf("This sentence is printed at all times\n");
    }

    return 0;
}