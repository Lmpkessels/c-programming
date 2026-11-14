#include <stdio.h>

int cnt(void);
int gto(void);

int main(void)
{
    cnt();

    printf("\n");

    gto();

    return 0;
}

int cnt(void)
{
    int i, n = 10;

    for (i = 0; i < n; i++) {
        if (i == 6) {
            continue;
        }

        printf("%d ", i);
    }

    return 0;
}

int gto(void)
{
    int i, n = 10;

    for (i = 0; i < n; i++) {
        if (i == 6) {
            goto done;
        }
        
        printf("%d ", i);

        done:
        i + 1;
    }

    return 0;
}