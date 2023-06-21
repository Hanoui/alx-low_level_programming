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

	printf("%lu", prev);

	for (count = 2; count <= 98; count++)
	{
		printf(", %lu", current);

		next = prev + current;
		prev = current;
		current = next;

		if (count % 5 == 0)
			printf("\n\t\t");
	}

	printf("\n");

	return 0;
}
