#include <stdio.h>

void str_cat(char *, char *);

int main(void)
{
    // s needs to have enough space to write to
    char s[100] = "Hello, World!";
    char *t = "Hello, new world!";

    str_cat(s, t);

    printf("s: %s\nt: %s\n", s, t);
}

void str_cat(char *s, char *t)
{
    // Increment s to get the end of s
    //
    // If instead using i then it goes out of bound and arrives at a
    // segmentation fault
    while (*s != '\0')
        s++;

    while ((*s++ = *t++) != '\0')
        ;
}