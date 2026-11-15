#include <assert.h>
#include "gcd.h"

int main(void)
{
    assert(gcd(12, 8) == 4);
    assert(gcd(24, 18) == 6);
    assert(gcd(48, 18) == 6);
    assert(gcd(100, 25) == 25);
    assert(gcd(81, 27) == 27);

    return 0;
}