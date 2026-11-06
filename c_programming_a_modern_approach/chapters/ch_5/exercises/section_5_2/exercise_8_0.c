#include <stdio.h>

int main(void)
{
    /*
    Simplify nested if block:
    if (age >= 13) {
        if (age <= 19) {
            teenager = true;
        }
    } else if (age < 13) {
        teenager = false; 
    }
    */

    int age, teenager;

    printf("Enter your age: ");
    if (scanf("%d", &age) != 1) {
        printf("Invalid input");
        return -1;
    }

    if (age >= 13 && age <= 19) {
        teenager = true;
    } else {
        teenager = false;
    }

    printf("%s\n", 
        teenager ? "You are a teenager" : "You aren't a teenager"
    );
    
    return 0;
}