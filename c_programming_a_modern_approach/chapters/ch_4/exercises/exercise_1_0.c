#include <stdio.h>

int main(void)
{
    int i, j, k;
    i = 1; j = 2; k = 3;

    printf("%d\n", (i + 5) % (j + 2) / k); // Undefined behaviour

    return 0;
}