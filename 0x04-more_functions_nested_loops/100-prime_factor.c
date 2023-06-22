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
	long int factor;

	while (n % 2 == 0)
	{
		factor = 2;
		n /= 2;
	}

	for (factor = 3; factor <= sqrt(n); factor += 2)
	{
		while (n % factor == 0)
		{
			n /= factor;
		}
	}

	if (n > 2)
	{
		factor = n;
	}

	return (factor);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long int number = 612852475143;
	long int largest_factor;

	largest_factor = largest_prime_factor(number);

	printf("%ld\n", largest_factor);

	return (0);
}

