#include <stdio.h>

int main(void)
{
    int i, count;
    int day, days;

    printf("Enter days of month: ");
    if (scanf("%d", &days) != 1 || days < 0 || days > 31) {
        printf("Invalid Input");
        return 1;
    }

    printf("Enter starting day of week (1=sun, 7=sat): ");
    if (scanf("%d", &day) != 1 || day < 0 || day > 7) {
        printf("Invalid Input");
        return 1;
    }

    printf("Su  Mo  We  Th  Fr  Sa\n");
    for (i = 1; i < day; i++) {
        printf(" ");
    }

    for (i = 1, count = day; i <= days; i++, count++) {
        printf("%3d", i);

        if (count % 7 == 0) {
            printf("\n");
        }
    }

    if ((count - 1) % 7 != 0) {
        printf("\n");
    }

    return 0;
}