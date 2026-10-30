#include <stdio.h>

int main(void)
{
    int i, j;

    // Prediction: will print 6 and (6 * 3) - 2 = 16
    i = 5;
    j = ++i * 3 - 2;
    printf("%d, %d\n", i, j);

    // Prediction: will print 6 and 3 - (2 * 5) = -7
    i = 5;
    j = 3 - 2 * i++;
    printf("%d, %d\n", i, j);

    // Prediction: will print 6 and 3 * 7 + 2 = 23
    i = 7;
    j = 3 * i-- + 2;
    printf("%d, %d\n", i, j);
    
    // Prediction: will print 6 and 3 + (6 * 2) = 15 
    i = 7;
    j = 3 + --i * 2;
    printf("%d, %d\n", i, j);

    return 0;
}