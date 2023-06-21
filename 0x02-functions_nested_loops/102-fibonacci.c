#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	unsigned long int prev = 1, current = 2, next;

	printf("%lu, %lu", prev, current);

	for (i = 3; i <= 50; i++)
	{
		next = prev + current;
		printf(", %lu", next);
		prev = current;
		current = next;
	}

	printf("\n");

	return 0;
}
