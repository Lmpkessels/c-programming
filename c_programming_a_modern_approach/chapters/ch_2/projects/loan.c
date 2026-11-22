#include <stdio.h>

int main(void)
{
    float loan, interest, payment, remaining, monthly_rate;
    float first_payment, second_payment, third_payment;

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

    monthly_rate = ((loan * (interest / 100.00f)) / 12);

    first_payment = (loan - payment) + monthly_rate;
    printf("Balance remaining after first payment: $ %.2f\n", first_payment);
    
    second_payment = (first_payment - payment) + monthly_rate;
    printf("Balance remaining after second payment: $ %.2f\n", second_payment);
    
    third_payment = (second_payment - payment) + monthly_rate;
    printf("Balacne remaining after third payment $ %.2f\n", third_payment);

    return 0;
}