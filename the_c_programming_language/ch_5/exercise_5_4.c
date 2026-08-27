#include <stdio.h>

#define CHAR_BUFF 1000 // Buffer for max amount of chars in s

int str_end(char *, char *);
void str_cat(char *, char *);

int main(void)
{
    char s[CHAR_BUFF] = "Hello, World!";
    char *t = "Append to Hello, World!";

    str_cat(s, t);

    printf("%s\n", s);

    printf("%d\n", str_end(s, t));

    return 0;
}

void str_cat(char *s, char *t)
{
    while (*s != '\0') {
        s++;
    }

    while ((*s++ = *t++) != '\0') 
        ;
}

int str_end(char *s, char *t)
{
    char *bs = s;
    char *bt = t;

    for ( ; *s; s++) ; // Loop till the end of s
    for ( ; *t; t++) ; // Loop till the end of t

    for ( ; *s == *t; s--, t--) {
        if (t == bt || s == bs) {
            break;
        }
    }

    if (*s == *t && t == bt && *s != '\0') {
        return 1;
    } else {
        return 0;
    }
}