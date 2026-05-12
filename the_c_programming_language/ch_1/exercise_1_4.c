#include <stdio.h>

// Function that displays celcius to fahr
int main(void) 
{
    char sc[] = "Celcius";
    char sf[] = "Fahr";

    float f, c;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    c = lower;

    // Print title above the table
    printf("%s:\t%s:\n", sc, sf);

    // Display ceclius and fahr
    while (f <= upper) {
        f = (9.0 * c) / 5.0 + 32;
        printf("%3.0f\t%6.1f\n", f, c);
        c = c + step;
    }
}