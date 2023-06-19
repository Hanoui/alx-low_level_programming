#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of three digits.
 * Numbers must be separated by ", " (comma followed by a space).
 * The three digits must be different.
 * 012, 120, 102, 021, 201, 210 are considered the same combination of
 * the three digits 0, 1 and 2.
 * Print only the smallest combination of three digits.
 * Numbers should be printed in ascending order, with three digits.
 * You can only use the putchar function (every other function is forbidden).
 * You can only use putchar six times maximum in your code.
 * You are not allowed to use any variable of type char.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d1, d2, d3;

	for (d1 = 0; d1 < 8; d1++)
	{
		for (d2 = d1 + 1; d2 < 9; d2++)
		{
			for (d3 = d2 + 1; d3 <= 9; d3++)
			{
				putchar(d1 + '0');
				putchar(d2 + '0');
				putchar(d3 + '0');

				if (d1 == 7 && d2 == 8 && d3 == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}

