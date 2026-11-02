#include <stdio.h>

int main(void)
{
    int age;
    char *allowed = "Allowed to drive";
    char *not_allowed = "Not allowed to drive";

    printf("Enter your age: ");
    
    if (scanf("%d", &age) != 1) {
        printf("Invalid input\n");
        return 1;
    };

    switch (age) {
        case 16:
            printf("%s in EU. %s in US\n", not_allowed, allowed);
            break;
        case 18:
            printf("%s in EU and US\n", allowed);
            break;
        default:
            if (age < 16) {
                printf("%s\n", not_allowed);
            } else if (age == 16) {
                printf("%s in US, but %s in EU.\n", allowed, not_allowed);
            } else {
                printf("%s\n", allowed);
            }
            break;
    }

    return 0;
}