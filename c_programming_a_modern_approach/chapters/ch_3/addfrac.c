#include <stdio.h>

int main(void)
{
    int num1, num2;
    int denom1, denom2;
    int result_num, result_denom;

    // When entering input use '/' in between numerator and denominator
    printf("Enter first fractions:\n");
    scanf("%d / %d", &num1, &denom1);

    printf("Enter second fraction:\n");
    scanf("%d / %d", &num2, &denom2);

    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;

    printf("The sum is %d / %d\n", result_num, result_denom);

    return 0;
}