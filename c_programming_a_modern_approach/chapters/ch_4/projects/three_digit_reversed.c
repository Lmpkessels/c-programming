#include <stdio.h>

int main(void)
{
    int three_digit;
    int first_num;
    int second_num;
    int last_num;

    printf("Enter a 3 digit number: ");
    if (scanf("%d", &three_digit) != 1 || 
        three_digit < 100 || three_digit > 999) 
    {
        printf("Please provide a number > 100 or < 999\n");
        return -1;
    }

    // Reverse
    first_num = three_digit % 10;
    second_num = (three_digit / 10) % 10;
    last_num = three_digit / 100;
    
    printf("Reversed = %1d%1d%1d\n", first_num, second_num, last_num);

    return 0;
}