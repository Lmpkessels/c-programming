#include <stdio.h>

char *fn_ones(int);
char *fn_tens(int);

int main(void)
{
    int tens, ones;
    char *o, *t;

    printf("Enter a two-digit number: ");
    if (scanf("%1d%1d", &tens, &ones) != 2) {
        printf("Invalid Input");
        return -1;
    }

    if ((t = fn_tens(tens)) == NULL) {
        printf("Invalid Input");
        return -1;
    }

    if ((o = fn_ones(ones)) == NULL) {
        printf("Invalid Input");
        return -1;
    }

    printf("You entered the number: %s-%s\n", t, o);
 
    return 0;
}

char *fn_ones(int ones)
{
    switch (ones) {
        case 1: 
            return "One";
        case 2:
            return "Two";
        case 3:
            return "Three";
        case 4:
            return "Four";
        case 5:
            return "Five";
        case 6:
            return "Six";
        case 7:
            return "Seven";
        case 8:
            return "Eight";
        case 9:
            return "Nine";
    }

    return NULL;
}

char *fn_tens(int tens)
{
        switch (tens) {
        case 1: 
            return "Ten";
        case 2:
            return "Twenty";
        case 3:
            return "Thirty";
        case 4:
            return "Fourty";
        case 5:
            return "Fifty";
        case 6:
            return "Sixty";
        case 7:
            return "Seventy";
        case 8:
            return "Eighty";
        case 9:
            return "Ninety";
    }

    return NULL;
}