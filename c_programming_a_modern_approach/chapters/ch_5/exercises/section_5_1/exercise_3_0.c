#include <stdio.h>

int main(void) 
{
    // NOTE: if a variable contains a value it's true else false
    int i, j, k;

    // Prediction: prints 1 because i < j = 1
    i = 3; j = 4; k = 5;
    printf("%d\n", i < j || ++j < k);
    // Prints 3, 4, 5 because ++j is not a statement
    printf("%d, %d, %d\n", i, j, k);

    // Prediction: prints 0 because i - 7 = 0
    i = 7; j = 8; k = 9;
    printf("%d\n", i - 7 && j++ < k);
    // Prints 7, 8, 9 because j++ < k is never executed because of short circuit
    printf("%d, %d, %d\n", i, j, k);

    // Prediction: prints 1 because i = j = i == 8 && j == 8 so evaluates to true
    i = 7; j = 8; k = 9;
    printf("%d\n", (i = j) || (j = k));
    // Prints 8, 8, 9 because i = j and j = k is never executed because of short
    // circuit
    printf("%d, %d, %d\n", i, j, k);

    return 0;
}