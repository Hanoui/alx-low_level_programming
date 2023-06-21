#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int prev = 1, current = 2, next;
	unsigned long int sum = 0;

	while (current <= 4000000)
	{
		if (current % 2 == 0)
			sum += current;

		next = prev + current;
		prev = current;
		current = next;
	}

	printf("%lu\n", sum);

	return (0);
}
