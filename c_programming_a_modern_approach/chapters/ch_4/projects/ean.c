#include <stdio.h>
#include <stdbool.h>

#define EAN_BUFF 13

int retrieve_ean(int[], int);
bool validate_ean(int[], int);

int main(void)
{
    int ean[EAN_BUFF];

    if (retrieve_ean(ean, EAN_BUFF) != 0) {
        return 1;
    }

    if (validate_ean(ean, EAN_BUFF)) {
        printf("Valid EAN\n");
    } else {
        printf("Invalid EAN\n");
    }

    return 0;
}

int retrieve_ean(int ean[], int n)
{
    printf("Enter 13 digit ean: ");

    for (int i = 0; i < n; i++) {
        if (scanf("%1d", &ean[i]) != 1 || ean[i] < 0 || ean[i] > 9) {
            printf("Invalid input\n");
            return 1;
        }
    }

    return 0;
}

bool validate_ean(int ean[], int n)
{
    int sum1, sum2, total, result;

    sum1 = 0; sum2 = 0;

    for (int i = 0; i < n - 1; i++) {
        if ((i + 1) % 2 == 0) {
            sum1 += ean[i];
        } else {
            sum2 += ean[i];
        }
    }

    total = (sum1 * 3) + sum2;
    result = (10 - (total % 10)) % 10;

    return ean[n - 1] == result;
}