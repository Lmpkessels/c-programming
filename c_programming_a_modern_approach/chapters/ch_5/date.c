#include <stdio.h>

int main(void)
{
    int month, day, year;

    printf("Enter dat (mm/dd/yyyy): ");
    if (scanf("%2d/%2d/%4d", &month, &day, &year) != 3) {
        printf("Invalid input");
        return 1;
    }

    printf("Dated this %d", day);
    switch (day) {
        case 1: case 21: case 31:
            printf("st");
            break;
        case 2: case 22:
            printf("nd");
            break;
        case 3: case 23:
            printf("rd");
            break;
    }

    printf(" day of ");

    switch (month) {
        case 1:
            printf("January");
            break;
        case 2:
            printf("February");
            break;
        case 3:
            printf("Martch");
            break;
        case 4:
            printf("April");
            break;
        case 5:
            printf("May");
            break;
        case 6:
            printf("June");
            break;
        case 7:
            printf("Jule");
            break;
        case 8:
            printf("August");
            break;
        case 9:
            printf("September");
            break;
        case 10:
            printf("November");
            break;
        case 11:
            printf("Oktober");
            break;
        case 12:
            printf("December");
            break;
        default:
            printf("Invalid month");
            break;
    }

    printf(", %d\n", year);

    return 0;
}