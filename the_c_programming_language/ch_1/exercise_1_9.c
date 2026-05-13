#include <stdio.h>

// Copy input to output, and replace a string with more then one
// blank back to a single blank
int main(void)
{
    int c, lastc;

    lastc = '\0';

    while ((c = getchar()) != EOF) {
        if (c != ' ' || lastc != ' ') {
            putchar(c);
        }

        lastc = c;
    }

    return 0;
}