#include <stdio.h>

int minutes_since_midnight(int, int);

int main(void)
{
    int departure_hours[] = {
        8, 9, 11, 12, 14, 15, 19, 21
    };

    int departure_minutes[] = {
        0, 43, 19, 47, 0, 45, 0, 45
    };

    int arival_hours[] = {
        10, 11, 13, 15, 16, 17, 21, 11
    };

    int arival_minutes[] = {
        16, 52, 31, 0, 8, 55, 20, 58
    };

    int rhours, rminutes, n, sum1, sum2;

    printf("Enter a 24-hour time: ");
    if (scanf("%d:%d", &rhours, &rminutes) != 2) {
        printf("Invalid Input");
        return -1;
    }

    n = sizeof(departure_hours) / sizeof(departure_hours[0]);
    sum1 = rhours + rminutes;

    for (int i = 0; i < n; i++) {
        sum2 = departure_hours[i] + departure_minutes[i];

        if (sum1 > sum2) {
            printf(
                "Closest departure time is %d:%d., arriving at %d:%d.\n",
                departure_hours[i - 1], departure_minutes[i - 1],
                arival_hours[i - 1], arival_minutes[i - 1]
            );

            break;
        }
    }

    return 0;
}