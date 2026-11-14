#include <stdio.h>

int main(void)
{
    int i;

    /*
    This prints i till it reaches 0.

    So it prints: 9384 938 93 9
    */
    i = 9384;
    do {
        printf("%d ", i);
        i /= 10;
    } while (i > 0);

    return 0;
}