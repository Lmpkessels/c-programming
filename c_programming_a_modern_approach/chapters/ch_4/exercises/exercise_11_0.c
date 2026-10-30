#include <stdio.h>

int main(void)
{
    int i, j, k;

    // Prediction: (1) will print 0, and (2) will print 2
    // because 1 - 1 is 0, then 1 + 1 is 2
    // 
    // The value of i - 1 isn't assigned so the value remains
    // 1
    i = 1;
    printf("1: %d\n", i++ - 1);
    printf("2: %d\n", i);

    // Prediction: will print 10 - 6 = 6, then it'll print
    // 11, 6
    i = 10; j = 5;
    printf("%d\n", i++ - ++j);
    printf("%d, %d\n", i, j);
    
    // Prediction: will print 7 - 7 = 0, then it'll print
    // 8, 7
    i = 7; j = 8;
    printf("%d\n", i++ - --j);
    printf("%d, %d\n", i, j);

    // Prediction: will print 3 - 4 = -1 + 4 = 3, then it'll print
    // 4, 5, 4
    i = 3; j = 4; k = 5;
    printf("%d\n", i++ - j++ + --k);
    printf("%d, %d, %d\n", i, j, k);

    return 0;
}