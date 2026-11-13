#include <stdio.h>

// Omiting the expression in a for statement
int main(void)
{
    int i;

    printf("Count down:\n");
    i = 10;
    for (; i > 0; --i) {
        printf("%d\n", i);
    }

    return 0;
}