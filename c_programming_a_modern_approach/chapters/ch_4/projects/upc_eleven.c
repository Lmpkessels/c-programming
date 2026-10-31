#include <stdio.h>
#include <stdbool.h>

#define UPC_BUFF 11

int retrieve_upc(int[], int);
bool validate_upc(int[], int);

int main(void)
{
    int upc[UPC_BUFF];
    if (retrieve_upc(upc, UPC_BUFF) != 0) {
        return 1;
    }

    if (validate_upc(upc, UPC_BUFF)) {
        printf("Valid UPC\n");
    } else {
        printf("Invalid UPC\n");
    }

    return 0;
}

int retrieve_upc(int upc[], int n)
{
    printf("Enter UPC (11 digits): ");
    for (int i = 0; i < n; i++) {
        if (scanf("%1d", &upc[i]) != 1 || upc[i] < 0 || upc[i] > 9) {
            printf("Invalid input");
            return 1;
        }
    }

    return 0;
}

bool validate_upc(int upc[], int n)
{
    int digit, sum1, sum2, total, result;

    sum1 = 0; sum2 = 0;

    printf("Enter the check digit: ");
    if (scanf("%d", &digit) != 1 || digit < 0 || digit > 9) {
        printf("Invalid input");
        return false;
    }

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            sum1 += upc[i];
        } else {
            sum2 += upc[i];
        }
    }

    total = 3 * sum1 + sum2;
    result = 9 - ((total) - 1) % 10;

    return digit == result;
}