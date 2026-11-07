#include <stdio.h>

int main(void)
{
    int speed;

    printf("Enter wind speed: ");
    if (scanf("%d", &speed) != 1) {
        printf("Invalid input");
        return 1;
    }

    if (speed <= 1) {
        printf("Wind force %d is calm\n", speed);
    } else if (speed <= 3) {
        printf("Wind force %d is Light Air\n", speed);
    } else if (speed <= 27) {
        printf("Wind force %d is a Breeze\n", speed);
    } else if (speed <= 47) {
        printf("Wind force %d is a Gale\n", speed);
    } else if (speed <= 63) {
        printf("Wind force %d is a Storm\n", speed);
    } else{
        printf("Wind force %d is a Huricane\n", speed);
    }

    return 0;
}