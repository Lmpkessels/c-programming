#include <stdio.h>

int main(void)
{
    int i;

    // This program produces the output one two because:
    // break isn't used and it falls through till the end
    i = 1;
    switch (i % 3) {
        case 0: printf("zero");
        case 1: printf("one");
        case 2: printf("two");
    }

    printf("\n");

    return 0;
}