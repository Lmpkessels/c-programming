#include <stdio.h>

#define UPC_BUFF 12

int retrieve_upc(int[]);
int compute_upc(int[], int);

int main(void)
{
    int upc[UPC_BUFF]; 
    
    if (retrieve_upc(upc) != 0) {
        return -1;
    }
    
    int n = sizeof(upc) / sizeof(upc[0]);
    if (compute_upc(upc, n) == 0) {
        printf("Valid UPC\n");
        return 0;
    } else {
        printf("Invalid UPC\n");
        return -1;
    }
}

int retrieve_upc(int upc[])
{
    printf("Enter first digit: ");
    if (scanf("%1d", &upc[0]) != 1) {
        printf("Invalid first digit\n");
        return -1;
    }

    printf("Enter first group of five: ");
    if (scanf("%1d%1d%1d%1d%1d", 
        &upc[1], &upc[2], &upc[3], &upc[4], &upc[5]) != 5) {
        printf("Invalid first group\n");
        return -1;
    };

    printf("Enter second group of five: ");
    if (scanf("%1d%1d%1d%1d%1d", 
        &upc[6], &upc[7], &upc[8], &upc[9], &upc[10]) != 5) {
        printf("Invalid second group\n");
        return -1;
    };

    printf("Enter last digit: ");
    if (scanf("%1d", &upc[11]) != 1) {
        printf("Invalid last digit\n");
        return -1;
    };

    return 0;
}

int compute_upc(int upc[], int n)
{
    int sum1, sum2;
    int total_sum, final_sum;

    sum1 = 0;
    sum2 = 0;

    for (int i = 0; i < 11; i++) {
        if (i % 2 == 0) {
            sum1 += upc[i];
        } else {
            sum2 += upc[i];
        }
    }

    total_sum = 3 * sum1 + sum2;
    final_sum = 9 - ((total_sum) - 1) % 10;

    if (final_sum == upc[11]) {
        return 0;
    } else {
        return -1;
    }
}