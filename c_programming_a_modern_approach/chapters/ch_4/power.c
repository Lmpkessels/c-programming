#include <stdio.h>
#include <assert.h>

int power(int, int);

int main(void)
{
    assert(power(2, 8) == (2 * 2 * 2 * 2 * 2 * 2 * 2 * 2));
    return 0;
}

int power(int num, int exponent)
{
    int j = 0;
    int sum = 1;
    
    while (j < exponent) {
        sum *= num;
        j++;
    }

    return sum;
}