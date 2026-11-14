#include <stdio.h>

int main(void)
{
    /* 
    This program infinitely prints 10 5 3 2 and then 1 infinitely.

    Because it first devides and assigns and increment in printf,
    then as soon as 0 is reached it becomes 1 so it'll never have a
    break point.
    */
    for (int i = 10; i >= 1; i /= 2) {
        printf("%d ", i++);
    }

    return 0;
}