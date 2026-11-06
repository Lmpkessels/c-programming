#include <stdio.h>

int main(void)
{
    int i;

    // Returns 17 because i = 17 which is greater then 0
    i = 17;
    printf("%d\n", i >= 0 ? i : -i);
    
    // Returns 17 because i = -17 which is less then 0 but because
    // of (i >= 0 ? i : -i) returns -i which is already -17 now becomes --17
    // which reverses -17 and makes it positive
    i = -17;
    printf("%d\n", i >= 0 ? i : -i);
    
    return 0;
}