#include <stdio.h>

int main(void)
{
    float x = 0.00002;
    int y = 101221;

    printf("%-7.1e\n", x);
    printf("%4.6e\n", x);
    printf("%-5.3d\n", y);
    printf("%6d\n", y);

    return 0;
}