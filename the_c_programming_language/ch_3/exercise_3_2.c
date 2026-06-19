#include <stdio.h>

// Transform escape sequence into text
void escape(char s[], char t[]) 
{
    int i = 0, j = 0;

    while (t[i] != '\0') {
        switch (t[i]) {
            case '\n':
                s[j++] = '\\';
                s[j++] = 'n';
                break;
            case '\t':
                s[j++] = '\\';
                s[j++] = 't';
                break;
            case '\\':
                s[j++] = '\\';
                s[j++] = '\\';
                break;
            default:
                s[j++] = t[i];
                break;
        }

        i++;
    }

    s[j] = '\0';
}

// Transform text back into escape sequence
void unescape(char s[], char t[]) 
{
    int i = 0, j = 0;

    while (t[i] != '\0') {
        if (t[i] == '\\') {
            i++;
            switch (t[i]) {
                case 'n':
                    s[j++] = '\n';
                    break;
                case 't':
                    s[j++] = '\t';
                    break;
                case '\\':
                    s[j++] = '\\';
                    break;
                default:
                    s[j++] = '\\';
                    s[j++] = t[i];
                    break;
            }
        } else {
            s[j++] = t[i];
        }

        i++;
    }

    s[j] = '\0';
}

int main(void) 
{
    char original[] = "This sentence \n contains \t and a '\\'";
    char transformed[200];
    char transformed_back[200];

    printf("Sequence in original state:\n");
    printf("%s\n\n", original);

    printf("Sequence transformed into full text:\n");
    escape(transformed, original);
    printf("%s\n\n", transformed);

    printf("Sequence transformed back into original state:\n");
    unescape(transformed_back, transformed);
    printf("%s\n\n", transformed_back);
}