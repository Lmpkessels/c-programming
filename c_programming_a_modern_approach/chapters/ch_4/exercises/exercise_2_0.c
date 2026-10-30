// Justify
#include <stdio.h>

int main(void)
{
    int i, j;
    
    i = 3; j = 4;
    
    int sum1 = (-i) / j;
    int sum2 = -(i / j);

    const char *equal = sum1 == sum2 ? "Yes" : "No";
    
    printf("Is sum1 equal to sum2? '%s'\n", equal);
    
    return 0;
}