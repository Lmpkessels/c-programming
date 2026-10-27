#include <stdio.h>

int main(void)
{
    int x, y;
    float z;

    printf("Enter (Dec, Dec, Float)\n");
    scanf("%d%d%f", &x, &y, &z);
    printf("%d | %d | %f\n", x, y, z);

    return 0;
}