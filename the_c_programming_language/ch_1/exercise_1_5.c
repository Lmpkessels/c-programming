#include <stdio.h>

#define UPPER 300 // The point where it starts from
#define LOWER 0 // The point where it moves towards
#define STEP 20 // The step taken at each itteration

int main(void)
{
    char sf[] = "Fahr:";
    char sc[] = "Celcius:";

    float f;

    printf("%s\t%s\n", sf, sc);

    // Print fahr to ceclius in starting from 300 instead of 0
    for (f = UPPER; f >= LOWER; f = f - STEP) {
        printf("%3.0f\t%6.1f\n", f, (3.0/9.0) * (f - 32));
    }
}