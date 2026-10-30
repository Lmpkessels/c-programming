#include <assert.h>

int main(void)
{
    int a, b, c, d, e;
    a = 10; b = 22; c = 33; d = 2; e = 101;
    assert(((a * b) - (c * d) + e) == a * b - c * d + e);
    assert((((a / d) % c) / d) == a / d % c / d);
    assert((-a - b) + (c- + d) == - a - b + c - + d);
    assert((((a * (-b)) / c) - d) == a * - b / c - d);

    return 0;
}