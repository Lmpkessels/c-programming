#include <stdio.h>

// Expand on shorthand notations such as a-z, a-f, 0-9, a-z0-9
// This function only works for ASCII
//
// s1 is the shorthand notations and s2 the expansion
void expand(char s1[], char s2[])
{
    char c;
    int i = 0, j = 0;

    while ((c = s1[i++]) != '\0') {
        if (s1[i] == '-' && s1[i + 1] >= c) {
            i++;
            while (c < s1[i]) {
                s2[j++] = c++;
            }
        } else {
            s2[j++] = c;
        }
    }

    s2[j] = '\0';
}

int main(void) 
{
    char s1[] = "a-z0-9\n";
    char s2[100];

    expand(s1, s2);
    printf("%s", s2);

    char s3[] = "a-f\n";
    char s4[100];

    expand(s3, s4);
    printf("%s", s4);

    char s5[] = "0-9\n";
    char s6[100];

    expand(s5, s6);
    printf("%s", s6);
}