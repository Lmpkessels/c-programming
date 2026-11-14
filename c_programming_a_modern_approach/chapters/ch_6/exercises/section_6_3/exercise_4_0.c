#include <stdio.h>

int main(void)
{
    int i, j, k;

    /*
    Loop three is not equavalent to the other loops because:
    0 becomes 1 and 1 becomes 2 and 2 becomes 3, etc. While at
    the other loops i and j simply get incremented at each itteration
    starting from 0.
    */

    printf("Loop one\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", i);
    }

    printf("\nLoop two\n");
    for (j = 0; j < 10; ++j) {
        printf("%d ", j);
    }

    printf("\nLoop three\n");
    for (k = 0; k++ < 10;) {
        printf("%d ", k);
    }
}