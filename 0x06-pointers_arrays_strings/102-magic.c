#include <stdio.h>

int main(void)
{
    int a[5];
    int *p = (int *)(main + 29);
    *(p - 5) = 98;
    printf("a[2] = %d\n", a[2]);
    return 0;
}
