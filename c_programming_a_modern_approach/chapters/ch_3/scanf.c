#include <stdio.h>

int main(void)
{
    int x, y;
    float z, a;

    printf("Enter 4 numbers 1 and 2 are of type 'int' 3 and 4 are of type 'float':\n");

    scanf("%d%d%f%f", &x, &y, &z, &a);

    printf("x = %d | y = %d | z = %f | a = %f\n", x, y, z, a);

    return 0;
}