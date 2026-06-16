#include <stdio.h>

#define MAXHIST 15
#define MAXWORD 11
#define IN 1
#define OUT 0

int main(void)
{
    int c;
    int i;
    int state;
    int nc;
    int len;
    int maxvalue;
    int overflow;
    int wl[MAXWORD];

    state = OUT;
    nc = 0;
    overflow = 0;

    for (i = 0; i < MAXWORD; i++) {
        wl[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (state == IN) {
                if (nc < MAXWORD) {
                    ++wl[nc];
                } else {
                    ++overflow;
                }

                nc = 0;
                state = OUT;
            }
        } else {
            if (state == OUT) {
                state = IN;
                nc = 1;
            } else {
                ++nc;
            }
        }
    }

    if (state == IN) {
        if (nc < MAXWORD) {
            ++wl[nc];
        } else {
            ++overflow;
        }
    }

    maxvalue = 0;
    for (i = 1; i < MAXWORD; i++) {
        if (wl[i] > maxvalue) {
            maxvalue = wl[i];
        }
    }

    for (i = 1; i < MAXWORD; i++) {
        printf("%d | ", i);

        if (maxvalue > 0) {
            len = wl[i] * MAXHIST / maxvalue;
        } else {
            len = 0;
        }

        while (len > 0) {
            putchar('*');
            --len;
        }

        printf(" (%d)\n", wl[i]);
    }

    if (overflow > 0) {
        printf(
            "\n%d words were >= %d\n",
            overflow,
            MAXWORD
        );
    }

    return 0;
}