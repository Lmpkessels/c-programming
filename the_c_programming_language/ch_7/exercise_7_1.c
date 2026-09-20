#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Change input to lower if argv[1] is lower and upper if argv[1] is upper
int main(int argc, char *argv[])
{
    char c;

    // Check for lower and provide all lower case
    if (strcmp(argv[1], "lower") == 0) {
        while ((c = getchar()) != EOF) {
            putchar(tolower(c));
        }
    }

    // Check for upper and provide all upper case
    if (strcmp(argv[1], "upper") == 0) {
        while ((c = getchar()) != EOF) {
            putchar(toupper(c));
        }
    }

    return 0;
}