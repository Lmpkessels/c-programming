#include <stdio.h>

#define MAXT 200 // Max possible indexes in t

// strindex: returns rightmost index of t in s, -1 if none
int strrindex(char s[], char t[])
{
    int i, j, k, rm;

    rm = -1;

    for (i = 0; s[i] != '\0'; i++) {
        // K is updated when matched characters are found in s
        for (j = i, k = 0; s[j] != '\0' && s[j] == t[k]; j++, k++) {
            ;
        }

        // Get the rightmost index i
        if (k > 0 && t[k] == '\0') {
            rm = i;
        }
    }

    return rm;
}

int main(void) 
{
    char s[] = "Hello, World!";
    char t[] = "rld!";

    printf("sizeof(s)=%ld\n", sizeof(s));
    printf("%d\n", strrindex(s, t));
}