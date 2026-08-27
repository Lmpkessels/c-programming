#include <stdio.h>

#define CHAR_BUFF 1000 // Maximum amount of characters in 's'

int get_line(char *, int);

int main(void) 
{
    char s[CHAR_BUFF];
    printf("%d\n", get_line(s, CHAR_BUFF));

    return 0;
}

// Getline is to read a line into s and then return the length
int get_line(char *s, int lim)
{
    int c, i;
    
    printf("Type something: ");
    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; i++) {
        *s++ = c;
    }

    if (c == '\n') {
        *s++ = c;
        i++;
    }

    *s = '\0';
    return i;
}