#include <stdio.h>

int main(void)
{
    int n;

    for (n = 1; n < 10; n++) {
        if (n % 2 == 0) {
            printf("%d is even.\n", n);
        }
    }

    return 0;
}