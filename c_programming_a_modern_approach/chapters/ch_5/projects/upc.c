#include <stdio.h>
#include <stdbool.h>

bool validate_upc(void);

int main(void)
{
    if (validate_upc()) {
        printf("VALID\n");
    } else {
        printf("NOT VALIED\n");
    }

    return 0;
}

bool validate_upc(void)
{
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, v_num;
    int sum1, sum2;
    int total, result_sum;

    printf("Enter first digit of UPC: ");
    if (scanf("%1d", &n1) != 1) {
        printf("Invalid input");
        return false;
    }

    printf("Enter first sequence of five digits: ");
    if (scanf("%1d%1d%1d%1d%1d", &n2, &n3, &n4, &n5, &n6) != 5) {
        printf("Invalid input");
        return false;
    }

    printf("Enter last sequence of five digits: ");
    if (scanf("%1d%1d%1d%1d%1d", &n7, &n8, &n9, &n10, &n11) != 5) {
        printf("Invalid input");
        return false;
    }

    printf("Enter validation digit: ");
    if (scanf("%1d", &v_num) != 1) {
        printf("Invalid input");
        return false;
    }

    sum1 = n1 + n3 + n5 + n7 + n9 + n11;
    sum2 = n2 + n4 + n6 + n8 + n10;

    total = 3 * sum1 + sum2;
    result_sum = 9 - ((total) - 1) % 10;

    return v_num == result_sum;
}