#include <stdio.h>

int main(void)
{
    int i, n;
    float factorial;

    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid Input");
        return 1;
    }

    fractorial = 1;

    for (i = n; i > 0; i--) {
        fractorial *= i;
    }

    printf("%f\n", 1.0 / fractorial);

    return 0;
}