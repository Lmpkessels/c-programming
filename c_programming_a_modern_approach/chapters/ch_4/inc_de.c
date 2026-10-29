#include <stdio.h>

int main(void)
{
    int i, j, k;
    i = j = k = 10;
    
    // i becomes 11 before the check so i == i + 1 is false because that's 12
    if (++i == 11) {
        printf("'i' is incremented emediately\n");
    } else {
        printf("'i' isn't incremented emediately but i know it is\n");
    }

    // At the check i is 11 after it it has become 12
    if (i++ == 11) {
        printf("'i' is incremented afterward\n");
    } else {
        printf("'i' isn't incrmented afterward but i know it is\n");
    }

    // i is 13 at this point and k 10 till after the check
    if (++i + k++ == 23) {
        printf("((i = i + 1 = 11) + (i = 10)) = 21\n");
    } else {
        printf("I'm wrong\n");
    }

    // i now has become 12 emediately at the check
    if (--i == 12) {
        printf("i is decremented emediately\n");
    } else {
        printf("i isn't incrmented emediately but i know it is\n");
    }

    // i is still 12 till after the check then it's 11
    if (i-- == 12) {
        printf("i is decremented afterward\n");
    } else {
        printf("i isn't decrmented afterward but i know it is\n");
    }
    
    // here i becomes 10 and *k-- which is 11 the sum equals to 110
    if (--i * k-- == 110) {
        printf("(i = i - 1 = 10) * (k = 10) = 110\n");
    } else {
        printf("I'm wrong\n");
    }

    if (k == 10) {
        printf("k has become 10 after the check above\n");
    } else {
        printf("k hasn't become 10 but i know it has\n");
    }

    return 0;
}