#include <stdio.h>

int main(void)
{
    int grade;

    printf("Enter the grade of the test: ");

    if (scanf("%d", &grade) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    switch (grade) {
        case 4:
            printf("Excellent\n");
            break;
        case 3:
            printf("Good\n");
            break;
        case 2:
            printf("Average\n");
            // Falls through till next break
        case 1:
            printf("Poor\n");
        case 0:
            printf("Failing\n");
            break;
        default:
            printf("Illigal grade\n");
            break;
    }

    return 0;   
}