#include <stdio.h>

int main(void)
{
    int year, month, day;

    printf("Enter (mm/dd/yyyy):\n");
    scanf("%2d/%2d/%4d", &month, &day, &year);
    printf("You've entered the date: %d/%d/%d\n", year, month, day);

    return 0;
}