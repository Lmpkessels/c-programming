#include <stdio.h>

int main(void)
{
    int n;
    float loan, interest, payment, remaining, monthly_rate;

    printf("Enter amount of loan: ");
    if (scanf("%f", &loan) != 1) {
        printf("Invalid Input\n");
        return 1;
    }

    printf("Enter interest rate: ");
    if (scanf("%f", &interest) != 1) {
        printf("Invalid Input\n");
        return 1;
    }

    printf("Enter monthly payment: ");
    if (scanf("%f", &payment) != 1) {
        printf("Invalid Input\n");
        return 1;
    }

    printf("Enter number of payments: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid Input");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        monthly_rate = ((loan * (interest / 100.00f)) / 12);
        remaining = (loan - payment) + monthly_rate;
        loan = remaining;
    }

    printf("The remaining amount after %d payments is %.2f\n", n, remaining);

    return 0;
}