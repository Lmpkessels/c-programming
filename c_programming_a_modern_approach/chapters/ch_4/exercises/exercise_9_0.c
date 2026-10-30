#include <stdio.h>

int main(void)
{
    int i, j, k;
    
    // Because of assignment the value get updated, e.g.
    // i = 0; i += 1; now the value of i has become 1
    //
    // Since *= is precedence 5, 1 first gets added to j,
    // then i is multiplied and assignment takes place
    //
    // printed: 64, 8
    i = 7; j = 8;
    i *= j + 1;
    printf("%d, %d\n", i, j);

    // j is added up by k, i is added up by j, and j remains the
    // same
    //
    // printed: 3, 2, 1
    i = j = k = 1;
    i += j += k;
    printf("%d, %d, %d\n", i, j, k);
    
    // j is subtracted from k, i is subtracted from the sum j - k,
    // and k remains the same
    //
    // printed: 2 ,-1 ,3
    i = 1; j = 2; k = 3;
    i -= j -= k;
    printf("%d, %d, %d\n", i, j, k);

    // j is multiplied by k, i is multiplied by j, and
    // k remains the same
    //
    // printed: 0, 0, 0
    i = 2; j = 1; k = 0;
    i *= j *= k;
    printf("%d, %d, %d\n", i, j, k);
    
    return 0;
}