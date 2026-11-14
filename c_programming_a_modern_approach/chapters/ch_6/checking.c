#include <stdio.h>

int main(void)
{
    int command;
    float credit, debit, balance;

    printf("*** ACME checkbook-balancing account ***\n");
    printf("Commands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit\n\n");

    balance = 0.0f;
    for (;;) {
        printf("Enter command: ");
        if (scanf("%d", &command) != 1) {
            printf("Invalid Input\n");
            return 1;
        }

        switch(command) {
            case 0:
                credit = 0.0f;
                break;
            case 1:
                printf("Enter the ammount of credit: ");
                scanf("%f", &credit);
                balance += credit;
                break;
            case 2:
                printf("Enter the ammount of debit: ");
                scanf("%f", &debit);
                balance -= debit;
                break;
            case 3:
                printf("Your current balance is: %.2f\n", balance);
                break;
            case 4:
                return 0;
            default:
                printf("Commands: 0=clear, 1=credit, ");
                printf("2=debit, 3=balance, 4=exit\n\n");
                break;
        }
    }
}