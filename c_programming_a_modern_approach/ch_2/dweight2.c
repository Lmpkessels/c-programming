#include <stdio.h>

#define INCHES_PER_POUND 166 // Inches allowed per pound

// Calculates the dimensional weight of a box trough user input
int main(void)
{
    int height, length, width, volume, weight;

    printf("Enter the height of the box: ");
    scanf("%d", &height); // Receives user input

    printf("Enter the length of the box: ");
    scanf("%d", &length);

    printf("Enter the width of the box: ");
    scanf("%d", &width);

    volume = width * length * height;
    weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;

    printf("VOLUME: %d\n", volume);
    printf("WEIGHT: %d\n", weight);
}