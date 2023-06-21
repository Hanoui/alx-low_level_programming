#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
    int count;
    unsigned long int prev = 1, current = 2, next;

    printf("%lu, %lu", prev, current);

    for (count = 3; count <= 98; count++)
    {
        next = prev + current;
        printf(", %lu", next);

        prev = current;
        current = next;
    }

    printf("\n");

    return 0;
}
