#include <stdio.h>
#include "gcd.h"

int main(void)
{
    int numerator, denominator;
    int d_gcd;
    int l_numerator, l_denominator;

    printf("This number calculates the lowest term\n");
    printf("Enter two digits (numerator/denominator): ")
    if (scanf("%d/%d", &numerator, &denominator) != 2) {
        printf("Invalid Input");
        return 1;
    }

    d_gcd = gcd(numerator, denominator);

    l_numerator = numerator / d_gcd;
    l_denominator = denominator / d_gcd;

    printf("In lowest terms: %d/%d\n", l_numerator, l_denominator);
    
    return 0;
}
