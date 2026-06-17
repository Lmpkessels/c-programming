#include <stdio.h>

float celcius(float fahr);

int main(void)
{
    float fahr;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    printf("Fahr | Celcius\n");
    while (fahr <= upper) {
        printf("%3.0f %6.1f\n", fahr, celcius(fahr));
        fahr = fahr + step;
    }
}

// Converts fahr to celcius
float celcius(float fahr)
{
    return (5.0 / 9.0) * (fahr - 32.0);
}