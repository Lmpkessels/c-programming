#include <stdio.h>

int main(void)
{
    int i, j, k;
    i = 1; j = 2; k = 3;

    printf("%d\n", (i + 5) % (j + 2) / k); // This behaviour was defined!

    return 0;
}