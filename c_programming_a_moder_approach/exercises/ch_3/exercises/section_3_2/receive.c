#include <stdio.h>

int main(void)
{
    int x, y;
    float z;

    printf("Enter (decimal, decimal, float):\n");

    // Enter 10.3 5 6
    if (scanf("%d%d%f", &x, &y, &z) != 3) {
        printf("Enter the numbers in the order: (dec, dec, float)\n");
        return -1;
    };
    
    // Will print 10 0 0.000000 (if the error wasn't handled)
    // This happens because scanf stops at the dot (.)
    printf("%d | %d | %f\n", x, y, z);

    float a, b;
    int c;

    printf("Enter (float, int, float):\n");

    // Enter: 12.3 45.6 789
    if (scanf("%f%d%f", &a, &c, &b) != 3) {
        printf("Enter the numbers in the order: (float, int, float)\n");
        return -1;
    };

    // Will print 12.300000 | 45 | 0.600000
    printf("%f | %d | %f\n", a, c, b);

    return 0;   
}