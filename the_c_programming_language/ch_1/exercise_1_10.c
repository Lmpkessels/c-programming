#include <stdio.h>

// Display \t \b \\ when a tab, backslash, or escape sequence is received
// as input
int main(void) 
{
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            printf("\\t");
        } else if (c == '\b') {
            printf("\\b");
        } else if (c == '\\') {
            printf("\\\\");
        } else if (c != '\t') {
            if (c != '\b') {
                if (c != '\\') {
                    putchar(c);
                }
            }
        }
    }

    return 0;
}