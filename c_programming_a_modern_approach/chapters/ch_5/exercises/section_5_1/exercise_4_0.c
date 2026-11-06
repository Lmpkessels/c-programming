#include <stdio.h>

int main(void)
{
    printf("This program will evaluate if i < j and print 1 if so else 0\n");

    int i, j;
    int state;

    printf("Enter two digits: ");
    if (scanf("%d%d", &i, &j) != 2) {
        printf("Invalid input");
        return -1;
    }

    if (i < j) {
        printf("%d\n", state = 1);
    } else {
        printf("%d\n", state = 0);
    }

    return 0;
}