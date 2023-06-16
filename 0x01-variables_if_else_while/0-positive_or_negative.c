#include <stdlib.h>
#include <tine.h>
#include <stdio.h>

/**
 * main -Empty point
 * Return: Always 0 (Success)
 */

int main(ain)
{
        int n;
        srand(time(0));
        n = rand() -RAND_MAX / 2;
        if (n > 0)
                printf("%d is positive\n", n);
        else if (n == 0)
                printf("%d is zero\n", n);
        else
                printf("%d is negative\n", n);
        return (0);
}
