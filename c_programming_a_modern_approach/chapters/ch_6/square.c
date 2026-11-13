#include <stdio.h>

int main(void)
{
    printf("Retrieve a square root\n");
    int n, i;
    
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input");
        return 1;
    }

    i = 1;
    while (i <= n) {
        printf("%d %d\n", i, i * i);
        i++;
    }

    return 0;
}