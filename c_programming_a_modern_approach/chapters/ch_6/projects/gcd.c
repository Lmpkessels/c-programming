#include <stdio.h>

int absolute(int x)
{
    if (x < 0) {
        return -x;
    }

    return x;
}

int gcd(int n, int m)
{
    int temp;

    n = absolute(n);
    m = absolute(m);

    while (n != 0) {
        temp = n;
        n = m % n;
        m = temp;
    }

    return m;
}