#include <stdio.h>

int main(void)
{
    int two_digit;
    int first_num;
    int second_num;

    printf("Enter a 2 digit number: ");
    if (scanf("%d", &two_digit) != 1 || 
        two_digit < 10 || two_digit > 99) 
    {
        printf("Please provide a number > 10 or < 99\n");
        return -1;
    }

    // Reverse
    first_num = two_digit % 10;
    second_num = two_digit / 10;
        
    printf("Reversed = %1d%1d\n", first_num, second_num);

    return 0;
}