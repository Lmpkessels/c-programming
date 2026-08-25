#include <stdio.h>

#define CHAR_BUFF 1000 // Buffer for max amount of characters

// Coppies a specific amount of characters based on 'n'
void str_n_cpy(char *s, char *t, int n)
{
    for (int i = 0; i < n; i++) {
        s[i] = t[i];
    }
}

//TODO: Fix the binary output in print for '\0' such that it becomes normal
void str_cpy(char *s, char *t) {
    while (*t != '\0') {
        *s++ = *t++;
    }

    //Added temp fix
    for ( ; *s; *s++) {
        *s = '\0';
    }
}

int main(void)
{
    char s[CHAR_BUFF];
    char *t = "Hello, world!";

    // This will not evaluate to the correct size of characters in t because
    // t is a pointer a char has the type of 8 so the size of t will be 8
    int n = sizeof(t) / sizeof(t[0]);

    const int enough_to_get_hello = 5;
    
    str_n_cpy(s, t, enough_to_get_hello);

    printf("%d, %s\n", n, s);

    char x[CHAR_BUFF];
    char *y = "Hello Habibi";

    str_cpy(x, y);

    printf("%s\n", x);

    return 0;
}