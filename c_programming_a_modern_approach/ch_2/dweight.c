#include <stdio.h>

#define INCHES_PER_POUND 166 // Inches allowed per pound

// Calculates the dimensional weight of a 12 x 10 x 8 box
int main(void) 
{
    int height, length, width, volume, weight;

    height = 8;
    length = 12;
    width = 10;

    volume = height * length * width;
    weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;

    printf("LEN: %d, WIDTH: %d, HEIGHT: %d\n", length, width, height);
    printf("VOL: %d\n", volume);
    printf("WEIGHT: %d\n", weight);
}