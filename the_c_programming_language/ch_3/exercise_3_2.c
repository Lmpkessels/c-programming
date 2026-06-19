#include <stdio.h>

// Transform escape sequence into text
void escape(char sequence[], char transformed[]) 
{
    int i = 0, j = 0;

    while (transformed[i] != '\0') {
        switch (t[i]) {
            case '\n':
                sequence[j++] = '\\';
                sequence[j++] = 'n';
                break;
            case '\t':
                sequence[j++] = '\\';
                sentence[j++] = 't';
                break;
            case '\\':
                sequence[j++] = '\\';
                sequence[j++] = '\\';
                break;
            default:
                sequence[j++] = transformed[i];
                break;
        }

        i++;
    }

    sequence[j] = '\0';
}

// Transform text back into escape sequence
void unescape(char sequence[], char transformed[]) 
{
    int i = 0, j = 0;

    while (transformed[i] != '\0') {
        if (transformed[i] == '\\') {
            i++;
            switch (transformed[i]) {
                case 'n':
                    sequence[j++] = '\n';
                    break;
                case 't':
                    sequence[j++] = '\t';
                    break;
                case '\\':
                    sequence[j++] = '\\';
                    break;
                default:
                    sequence[j++] = '\\';
                    sequence[j++] = transformed[i];
                    break;
            }
        } else {
            sequence[j++] = transformed[i];
        }

        i++;
    }

    sequence[j] = '\0';
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