#include <stdio.h>

// Function that displays fahr to ceclius
int main(void) 
{
    char sf[] = "Fahr";
    char sc[] = "Celcius";

    float c, f;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    f = lower;

    // Print title above the table
    printf("%s:\t%s:\n", sf, sc);

    // Display fahr and celcius
    while (f <= upper) {
        c = (5.0 / 9.0) * (f - 32);
        printf("%3.0f\t%6.1f\n", f, c);
        f = f + step;
    }
}