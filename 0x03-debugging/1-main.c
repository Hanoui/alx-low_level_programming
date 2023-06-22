#include "main.h"

/**
 * main - Causes an infinite loop
 *
 * Description: This program demonstrates an infinite loop by not incrementing
 *              the variable i in the while loop condition.
 *
 * Return: 0
 */
int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;

        /* Commented out to avoid infinite loop
        while (i < 10)
        {
                putchar(i);
        }
        */

        printf("Infinite loop avoided! \\o/\n");

        return (0);
}
