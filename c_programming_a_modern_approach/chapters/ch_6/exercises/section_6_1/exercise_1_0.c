#include <stdio.h>

int main(void)
{
    int i;

    /*
    This will print i * 2 where i is initialized at the first itteration
    with 1, and it'll itterate till it reaches 128.

    so it prints: 1, 2, 4, 16, 32, 64, 128 (1 is printed because the print 
    statement is used before multiplicative assignment).
    */
    i = 1;
    while (i <= 128) {
        printf("%d ", i);
        i *= 2;
    }

    return 0;
}