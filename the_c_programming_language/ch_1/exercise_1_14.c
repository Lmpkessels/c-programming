#include <stdio.h>
#include <ctype.h>

#define MAXHIST 15 // Max size of histogram
#define MAXCHAR 128 // Maximum amount of characters in ASCII

int main(void)
{
    int c, i;
    int state;
    int len;
    int overflow;
    int maxvalue;
    int character_count[MAXCHAR];

    for (i = 0; i < MAXCHAR; i++) {
        character_count[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c < MAXCHAR) {
            ++character_count[c];
        }
    }

    maxvalue = 0;
    for (i = 1; i < MAXCHAR; i++) {
        if (character_count[i] > maxvalue) {
            maxvalue = character_count[i];
        }
    }

    for (i = 1; i < MAXCHAR; i++) {
        if (isprint(i)) {
            printf("%5d - %c = %5d : ", i, i, character_count[i]);
        } else {
            printf("%5d -   - %5d : ", i, character_count[i]);
        }

        if (maxvalue > 0) {
            len = character_count[i] * MAXHIST / maxvalue;
        } else {
            len = 0;
        }

        while (len > 0) {
            putchar('*');
            --len;
        }

        putchar('\n');
    }
}