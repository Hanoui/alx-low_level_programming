#include <stdio.h>

/**
 * main - causes an infinite loop
 *
 * Return: Always 0
 */
int main(void)
{
	printf("Infinite loop incoming :(\n");

	/* Commented out the infinite loop to avoid the issue */
	/*
	 * int i = 0;
	 * while (i < 10)
	 * {
	 *     putchar(i);
	 * }
	 */

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
