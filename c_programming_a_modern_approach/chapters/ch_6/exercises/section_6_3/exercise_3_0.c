#include <stdio.h>

int main(void)
{
    int i, j;

    /*
    This prints 5, 4, 3, 2 because the condition of j > 0 is reached
    earlier then i > 0, because j goes from 4 to 1 and i goes from 5 to
    1.
    */
    for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1) {
        printf("%d ", i);
    }

    return 0;
}