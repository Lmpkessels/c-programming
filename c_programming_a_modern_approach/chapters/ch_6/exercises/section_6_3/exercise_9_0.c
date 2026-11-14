#include <stdio.h>

int main(void)
{
    int i;
    i = 10;
    
    // Infinite
    while (i >= 1) {
        printf("%d ", i++);
        i /= 2;
    }

    return 0;
}