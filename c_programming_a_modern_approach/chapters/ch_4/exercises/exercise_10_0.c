#include <stdio.h>

int main(void)
{
    int i, j;

    // Prediction: will print 12 12 since j is assigned 12 and i gets 6 added up to it
    i = 6;
    j = i += i;
    printf("%d, %d\n", i, j);

    // Prediction: will print 3, 4 becasuse 5 - 2 = 3 and 3 + 1 is 4 
    i = 5;
    j = (i -= 2) + 1;
    printf("%d, %d\n", i, j);

    // Prediction: will print 2, 8 because i is assigned 2.5 which will be truncated
    // to 2 because i is an int, and adding up 6 to 2 equals 8 
    i = 7;
    j = 6 + (i = 2.5);
    printf("%d, %d\n", i, j);

    // Prediction: 6, 9, because the values of i and j are reassigned within the equation
    // and the result sum of the equation is assigned to j
    i = 2; j = 8;
    j = (i = 6) + (j = 3);
    printf("%d, %d\n", i, j);

    return 0;
}