#include <stdio.h>

int main(void)
{
    int f_month, f_day, f_year;
    int s_month, s_day, s_year;
    int sum1, sum2;

    printf("Enter first date (mm/dd/yyyy): ");
    if (scanf("%d/%d/%d", &f_month, &f_day, &f_year) != 3) {
        printf("Invalid input\n");
        return -1;
    }

    printf("Enter second date (mm/dd/yyyy): ");
    if (scanf("%d/%d/%d", &s_month, &s_day, &s_year) != 3) {
        printf("Invalid input\n");
        return -1;
    }

    sum1 = (((f_year * 10000) + (f_month + 100)) + f_day);
    sum2 = (((s_year * 10000) + (s_month + 100)) + f_day);

    if (sum1 < sum2) {
        printf(
            "%d/%d/%d comes earlier than %d/%d/%d\n", 
            f_month, f_day, f_year, s_month, s_day, s_year
        );
    } else if (sum1 > sum2) {
        printf(
            "%d/%d/%d comes earlier than %d/%d/%d\n",
            s_month, s_day, s_year, f_month, f_day, f_year
        );
    } else {
        printf("Dates are equal\n");
    }

    return 0;
}