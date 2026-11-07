#include <stdio.h>

int main(void)
{
    int time_24, minutes;
    const char *am_pm;

    if (scanf("%d:%d", &time_24, &minutes) != 2) || 
    time_24 < 0 || time_24 > 24
    {
        printf("Invalid input");
        return 0;
    }

    am_pm = time_24 < 12 ? "AM" : "PM";

    switch (time_24) {
        case 1:
            printf("%d:%d%s", 1, minutes, am_pm);
            break;
        case 2:
            printf("%d:%d%s", 2, minutes, am_pm);
            break;
        case 3:
            printf("%d:%d%s", 3, minutes, am_pm);
            break;
        case 4:
            printf("%d:%d%s", 4, minutes, am_pm);
            break;
        case 5:
            printf("%d:%d%s", 5, minutes, am_pm);
            break;
        case 6:
            printf("%d:%d%s", 6, minutes, am_pm);
            break;
        case 7:
            printf("%d:%d%s", 7, minutes, am_pm);
            break;
        case 8:
            printf("%d:%d%s", 8, minutes, am_pm);
            break;
        case 9:
            printf("%d:%d%s", 9, minutes, am_pm);
            break;
        case 10:
            printf("%d:%d%s", 10, minutes, am_pm);
            break;
        case 11:
            printf("%d:%d%s", 11, minutes, am_pm);
            break;
        case 12:
            printf("%d:%d%s", 12, minutes, am_pm);
            break;
        case 13:
            printf("%d:%d%s", 1, minutes, am_pm);
            break;
        case 14:
            printf("%d:%d%s", 2, minutes, am_pm);
            break;
        case 15:
            printf("%d:%d%s", 3, minutes, am_pm);
            break;
        case 16:
            printf("%d:%d%s", 4, minutes, am_pm);
            break;
        case 17:
            printf("%d:%d%s", 5, minutes, am_pm);
            break;
        case 18:
            printf("%d:%d%s", 6, minutes, am_pm);
            break;
        case 19:
            printf("%d:%d%s", 7, minutes, am_pm);
            break;
        case 20:
            printf("%d:%d%s", 8, minutes, am_pm);
            break;
        case 21:
            printf("%d:%d%s", 9, minutes, am_pm);
            break;
        case 22:
            printf("%d:%d%s", 10, minutes, am_pm);
            break;
        case 23:
            printf("%d:%d%s", 11, minutes, am_pm);
            break;
        case 24:
            printf("%d:%d%s", 12, minutes, am_pm);
            break;
    }

    return 0;
} 