#include <stdio.h>

int main(void)
{
    int i, j, k;

    // Prediction: 1 because it's logical or and !10 means it's not 10 so its nothing
    i = 10; j = 5;
    printf("%d\n", !i < j);

    // Prediction: 1 because not i = 0 not 0 is 1 + 0 is 1
    i = 2; j = 1;
    printf("%d\n", !!i + !j);

    // Prediction: 1 because i && j = 0 because they're not equal, and k = -5
    // which is a value so 1
    i = 5; j = 0; k = -5;
    printf("%d\n", i && j || k);

    // Prediction: 1 because i < j = 0 then logical or checks k which is a value so it's
    // 1 so we have 1 - 1 which is 1 even if k was none it wouldve been 1
    i = 1; j = 2; k = 3;
    printf("%d\n", i < j || k);

    return 0;
}