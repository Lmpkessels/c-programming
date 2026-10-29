#include <stdio.h>

int main(void)
{
    int i, j, k;
    i = j = k = 10;
    printf("%d\n", i + j + k);
    
    int a, b, c, sum;
    a = b = 10;
    sum = (a + b) * (c = a);
    printf("%d\n", sum);

    return 0;
}