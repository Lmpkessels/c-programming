#include <stdio.h>

#define SENTC_BUFF 64 // 512 bit buffer for a sentence

// Function that works with multiple escape sequences
int main(void) 
{
    // Performs a tab and expands into a double new line
    char sentc[SENTC_BUFF] = "\tHello, world!\n\nHello, second world!";
    printf("%s\n", sentc);
}