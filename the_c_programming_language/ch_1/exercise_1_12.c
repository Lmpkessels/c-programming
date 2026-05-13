#include <stdio.h>

#define IN 1 // Inside the word
#define OUT 0 // Outside the word

// Display only one word per sentence as output after receiving multiple
// words in one sentence as input
int main(void)
{
    int c, state;

    state = OUT;
    while ((c = getchar()) != EOF) {
        // Checksum of everything that is not a word and indicates
        // a new word
        if (c == ' ' || c == '\t' || c == '\n') {
            if (state == IN) { // In the next word when left the upfront
                putchar('\n');
                state = OUT;
            }
        } else if (state == OUT) { // Leave the first word and enter the next
            state = IN;
            putchar(c);
        } else {
            putchar(c);
        }
    }

    return 0;
}