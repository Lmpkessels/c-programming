#include <stdio.h>

/*
Ask user for number of shares, and price per share.
Compute commission charged by rival broker:
    - 33 + 3 cents for < 2000 shares
    - 33 + 2 cents for > 2000 shares
Display rivals commission as well as commission charged by original broker
*/

float rival(void);
float original(void);

int main(void)
{
    float c_rival, c_original;

    c_rival = rival();
    c_original = original();

    printf(
        "Rival:\tOriginal:\n%.2f\t%.2f\n", 
        c_rival, c_original
    );

    return 0;
}

float rival(void)
{
    printf("Calculate commision of Rival Trades\n");
    float shares, price, commission;

    printf("Enter number of shares: ");
    if (scanf("%f", &shares) != 1) {
        printf("Invalid input");
        return 1;
    }

    printf("Enter price per share: ");
    if (scanf("%f", &price) != 1) {
        printf("Invalid input");
        return 1;
    }

    if (shares < 2000.00f) {
        commission = 33.00f + .03f;
    } else {
        commission = 33.00f + .03f;
    }

    return commission;
}

float original(void)
{
    printf("Calculate commision of Original Trades\n");

    float commission, value;

    printf("Enter value of trade: ");
    if (scanf("%f", &value) != 1) {
        printf("Invalid input");
        return 0;
    }

    if (value < 2500.00f) {
        commission = 30.00f + .017f * value;
    } else if (value < 6250.00f) {
        commission = 56.00f + .0066f * value;
    } else if (value < 20000.00f) {
        commission = 76.00f + .0034f * value;
    } else if (value < 50000.00f) {
        commission = 100.00f + .0022f * value;
    } else if (value < 500000.00f) {
        commission = 155.00f + .0011f * value;
    } else {
        commission = 255.00f + .0009f * value;
    }

    if (commission < 39.00f) {
        commission = 39.00f;
    }

    return commission;
}