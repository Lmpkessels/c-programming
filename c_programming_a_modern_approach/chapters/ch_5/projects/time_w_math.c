#include <stdio.h>

int main(void)
{
    int hour_24, hour_12, minutes;
    
    printf("Enter the time in 24h: ");
    if (scanf("%d:%d", &hour_24, &minutes) != 2) || 
    time_24 < 0 || time_24 > 24
    {
        printf("Invalid input");
        return 1;
    }

    hour_12 = (hour_24 + 11) % 12 + 1; 

    if (hour_24 < 12) {
        printf("%d:%dAM\n", hour_12, minutes);
    } else {
        printf("%d:%dPM\n", hour_12, minutes);
    }

    return 0;
}