#include <stdio.h>

#define MIN_MONTH 1 // Min possible amount of months in year
#define MAX_MONTH 12 // Max possible amount of months in year

char *get_month_name(int);

int main(void)
{
    printf("%s\n", get_month_name(12)); // Returns december
    printf("%s\n", get_month_name(2)); // Returns february
    printf("%s\n", get_month_name(0)); // Returns Invalid Month
    printf("%s\n", get_month_name(13)); // Returns Invalid Month
}

char *get_month_name(int n)
{
    // Month must be defined as a array of pointers because:
    // get_month_name returns a pointer (char *)
    static char *month[14] = {
        "Invalid Month", 
        "January", "February", "March",
        "April", "May", "June", "Jule",
        "August", "September", "October",
        "November", "December"
    };

    // Check for an invalid month if so return the statement, else,
    // return the name of the month
    return ((n) < (MIN_MONTH) || (n) > (MAX_MONTH) ? (*(month)) : (*(month + n)));
}