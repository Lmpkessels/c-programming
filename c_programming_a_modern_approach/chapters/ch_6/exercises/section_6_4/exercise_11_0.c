#include <stdio.h>

int main(void)
{
    int i, sum;

    /*
    At every even number a skip happens.
    Only at an odd number i is added up to the current sum.

    So 1 % 2 == 1, sum = 1. 2 % 2 == 0, sum = 1. 3 % 2 == 1, sum = 4. 
    4 % 2 == 0, sum = 4. 5 % 2 == 1, sum = 9. etc.

    (i is the one being added up, not the remainder itself).
    
    Finaly 25 is printed.
    */
    sum = 0;
    for (i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            continue;
        }
        
        sum += i;
    }

    printf("%d\n", sum);

    return 0;
}