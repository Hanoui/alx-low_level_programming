#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 98 Fibonacci numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long fib1 = 1, fib2 = 2, fib_sum;
	int count;

	printf("%lu, ", fib1); /* Print the first Fibonacci number */
	printf("%lu", fib2); /* Print the second Fibonacci number */

	for (count = 2; count < 98; count++)
	{
		fib_sum = fib1 + fib2;
		printf(", %lu", fib_sum);

		fib1 = fib2;
		fib2 = fib_sum;
	}

	printf("\n");

	return 0;
}

