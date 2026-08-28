#include <stdio.h>

#define MIN_MONTH 1 // Min possible amount of months in year
#define MAX_MONTH 12 // Max possible amount of months in year
#define MIN_DAY 1 // Min possible amount of days in month

int day_of_year(int, int, int);

static char daytab[2][13] = {
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

int main(void)
{
    printf("%d\n", day_of_year(2026, 8, 28)); // Returns 240
    printf("%d\n", day_of_year(2026, 1, 1)); // Returns 1 
    printf("%d\n", day_of_year(2026, 0, 31)); // Returns -1 
    printf("%d\n", day_of_year(2026, 8, 0)); // Returns -1
}

// This algorithm counts what day it is this year out of the 365 in a non-leap
// year, and 366 in a leap year
int day_of_year(int year, int month, int day)
{
    int i, leap;

    leap = year % 4 == 0 && year % 100 != 0 && year % 400 == 400;
    // Check if the month is within range
    if (month < MIN_MONTH || month > MAX_MONTH) {
        return -1;
    }

    // Check if the day is within rangeprintf("%d\n", *get_month_name(12));
    if (day < MIN_DAY || day > daytab[leap][month]) {
        return -1;
    }

    // Leap is either 0 or 1
    // i is 1...month
    for (i = 1; i < month; i++) {
        day += daytab[leap][i];
    }


    return day;
}