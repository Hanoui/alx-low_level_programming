#include <unistd.h>
#include "main.h"

/**
 * _putchar - Writes a character to stdout
 * @c: The character to print
 *
 * Return: On success 1. On error, -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_times_table - Prints n time, starting with 0
 * @n: The number to print the times table for
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
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(result + '0');
				}
				else if (result < 100)
				{
					_putchar(' ');
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
				}
				else
				{
					_putchar((result / 100) + '0');
					_putchar(((result / 10) % 10) + '0');
					_putchar((result % 10) + '0');
				}
			}
		}
		_putchar('\n');
	}
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	print_times_table(3);
	_putchar('\n');
	print_times_table(5);
	_putchar('\n');
	print_times_table(98);
	_putchar('\n');
	print_times_table(12);

	return (0);
}

