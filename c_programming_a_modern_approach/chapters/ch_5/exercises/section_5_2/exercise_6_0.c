#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input");
        return -1;
    }

    // This statement is valid
    // It doesn't provide what the sentence expects because
    // n must be -9 to evaluate to true because equality is checked
    if (n == 1-10) {
        printf("n is between 1 and 10\n");
    }

    return 0;
}