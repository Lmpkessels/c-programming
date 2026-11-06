#include <stdio.h>

int main(void)
{
    int i, j, k;

    // Prediction: prints 1 because k > i is 0 and 0 < j is 1
    i = 5; j = 10; k = 1;
    // Verify k > i = 0
    printf("%d\n", k > i);
    printf("%d\n", k > i < j);

    // Prediction: prints 1 because i < j = 0 and j < k = 0, so 0 == 0 is true is 1 
    i = 3; j = 2; k = 1;
    printf("%d\n", i < j == j < k);

    // Prediction: prints 0 because i % j = 3 + 3 = 6 < 5 = 0
    i = 3; j = 4; k = 5;
    printf("%d\n", i % j);
    printf("%d\n", i % j + i < k);

    return 0;
}