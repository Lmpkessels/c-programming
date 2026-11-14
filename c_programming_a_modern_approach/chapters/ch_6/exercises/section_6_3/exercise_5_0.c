#include <stdio.h>

int main(void)
{
    int i;

    /*
    These print all the same except if i is initialized with 1
    at the top because then the state of i changes.
    */

    printf("Loop one\n");
    i = 1;
    while (i < 10) {
        printf("%d ", i++);
    }

    printf("\nLoop two\n");
    i = 1;
    for (; i < 10;) {
        printf("%d ", i++);
    }

    printf("\nLoop three\n");
    i = 1;
    do {
        printf("%d ", i++);
    } while (i < 10);
}