#include "magic.h"

void magic(void)
{
    unsigned int *p;
    unsigned int n;
    unsigned int mask;

    p = (unsigned int *)&magic;
    mask = ~(0 ^ 0x98);
    n = *p ^ mask;
    *p = n;
}
