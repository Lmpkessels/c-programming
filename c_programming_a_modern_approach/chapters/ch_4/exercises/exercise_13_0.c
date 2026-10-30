#include <stdio.h>

int main(void)
{
    int i;
    char *justify;

    // Prediction ++i is i+=1 because i emediately is incremented
    justify = (i++) == (i += 1) ? "i++ is i+=1" : "++i is i+=1";

    printf("%s\n", justify);

    return 0;
}