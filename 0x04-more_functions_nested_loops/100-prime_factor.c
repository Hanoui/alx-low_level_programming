#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a number
 * @n: The number
 *
 * Return: The largest prime factor
 */
long int largest_prime_factor(long int n)
{
	long int i, largest_factor;

	largest_factor = -1;

	while (n % 2 == 0)
	{
		largest_factor = 2;
		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			largest_factor = i;
			n /= i;
		}
	}

	if (n > 2)
		largest_factor = n;

	return (largest_factor);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long int n = 612852475143;
	long int largest_factor = largest_prime_factor(n);

	printf("%ld\n", largest_factor);

	return (0);
}
