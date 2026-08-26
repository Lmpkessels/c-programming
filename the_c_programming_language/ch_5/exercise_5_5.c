/*
In the C library you have 2 functions of each below one for 'n' which works
on 'n' amount of indices, and another without 'n' which uses the full length
*/

#include <stdio.h>

#define CHAR_BUFF 1000 // Buffer for max amount of characters

// Coppies a specific amount of characters based on 'n'
char *str_n_cpy(char *s, char *t, int n)
{
    // Start is used such that the first address of where is being coppied 
    // to can be returned
    // 
    // (To save the original address of it's location)
    char *start = s;

    for (int i = 0; i < n; i++) {
        *s++ = *t++;
    }

    *s = '\0';

    return start;
}

char *str_n_cat(char *s, char *t, int n)
{
    char *start = s;

    // Get the end of 's'
    //
    // Declines 's' at each itteration till its '\0'
    while (*s != '\0') {
        s++;
    }

    for (int i = 0; i < n; i++) {
        *s++ = *t++;
    }
    
    *s = '\0';

    return start;
}

// Compare *st with *ct and return -1 if st<ct, 1 if st>ct, and 0 if st==ct
int str_n_cmp(char *st, char *ct, int n)
{
    for (int i = 0; i < n; i++) {
        // Unsigned char is used because characters are positive, and 2s
        // compilement flips the bits this is to prevent it
        if ((unsigned char)*st < (unsigned char)*ct) {
            return -1;
        }

        if ((unsigned char)*st > (unsigned char)*ct) {
            return 1;
        }

        if ((unsigned char)*st == '\0') {
            return 0;
        }

        st++;
        ct++;
    }

    return 0;
}

int main(void)
{
    char s[CHAR_BUFF];
    char *t = "Hello, world!";

    // This will not evaluate to the correct size of characters in t because
    // t is a pointer a char has the type of 8 so the size of t will be 8
    // int n = sizeof(t) / sizeof(t[0]);

    printf("%s\n", str_n_cpy(s, t, 5));

    char g[CHAR_BUFF] = "Luuk, ";
    char *c = "is great!";

    printf("%s\n", str_n_cat(g, c, 9));

    char *st = "Hello, World!";
    char *ct = "Hello, World!";

    // Prints 0
    printf("%d\n", str_n_cmp(st, ct, 2));

    return 0;
}