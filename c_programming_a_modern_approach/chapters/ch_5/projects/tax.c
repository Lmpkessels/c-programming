#include <stdio.h>

int main(void)
{
    printf("Calculate your TAX due\n");
    float income, percentage, amount, tax_due;

    printf("Enter your earnings: ");
    if (scanf("%f", &income) != 1) {
        printf("Invalid Input");
        return -1;
    }

    if (income < 750.00f) {
        percentage = 1.00f;
    } else if (income < 2250.00f) {
        percentage = 2.00f;
        amount = 7.50f;
    } else if (income < 3750.00f) {
        percentage = 3.00f;
        amount = 37.50f;
    } else if (income < 5250.00f) {
        percentage = 4.00f;
        amount = 82.50f;
    } else if (income < 7000.00f) {
        percentage = 5.00f;
        amount = 142.50f;
    } else {
        percentage = 6.00f;
        amount = 230.00f;
    }

    tax_due = (income * (percentage / 100.00f)) + amount;

    printf("Your tax due is: %.2f\n", tax_due);

    return 0;
}