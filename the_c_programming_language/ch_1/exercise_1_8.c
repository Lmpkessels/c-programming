#include <stdio.h>

int main(void) 
{
    int c;
    int b = 0, t = 0, nl = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') b++;
        else if (c == '\t') t++;
        else if (c == '\n') nl++;
    }

    printf("Spaces: %d\n", b);
    printf("Tabs: %d\n", t);
    printf("New lines: %d\n", nl);

    return 0;
}