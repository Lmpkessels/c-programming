#include <stdio.h>

int main(void)
{
    int year, month, day;
    int i_year, i_month, i_day;
    int sum1, sum2;

    year = 5000;
    month = day = 35;

    printf("This program displays the earliest date\n");
    for (;;) {
        printf("Enter a date (mm/dd/yyyy) (0/0/0 is exit): ");
        // TODO: handle errors for less than 0, days for months of 30 31 and 28/29
        if (scanf("%d/%d/%d", &i_month, &i_day, &i_year) != 3) {
            printf("Invalid Input\n");
            return 1;
        }

        if (i_month == 0 && i_day == 0 && i_year == 0) {
            break;
        }

        sum1 = ((i_year * 10000) + (i_month * 100) + i_day);
        sum2 = ((year * 10000) + (month * 100) + day);

        if (sum1 <= sum2) {
            year = i_year;
            month = i_month;
            day = i_day;
        }
    }

    printf("%d/%d/%d is the earliest date.\n", month, day, year);
    
    return 0;
}