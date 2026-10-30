#include <assert.h>

int main(void)
{
    int i, j;
    i = 1; j = 2;

    assert(i += j == 3);

    i--;
    assert(i == 0);
    
    i = 1;
    assert(i + j / i == 3);
    assert(i % ++j == 1);

    return 0;
}