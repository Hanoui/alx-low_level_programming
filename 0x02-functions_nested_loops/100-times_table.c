#include "main.h"

/**
 * print_times_table - Prints n, starting with 0
 * @n: The number of times table to print
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, result;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;

			if (j == 0)
				_putchar('0');
			else
			{
				_putchar(',');
				_putchar(' ');

				if (result < 10)
					_putchar(' ');
				else if (result >= 10 && result < 100)
					_putchar('0' + (result / 10));

				_putchar('0' + (result % 10));
			}
		}

		_putchar('\n');
	}
}

/**
 * _putchar - Writes a character to stdout
 * @c: The character to print
 *
 * Return: On success 1. On error, -1 is returned, and errno is appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
