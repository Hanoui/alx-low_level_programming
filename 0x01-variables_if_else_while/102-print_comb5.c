#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two two-digit numbers.
 * The numbers should range from 0 to 99.
 * The two numbers should be separated by a space.
 * All numbers should be printed with two digits (1 should be printed as 01).
 * The combination of numbers must be separated by a comma, followed by a space.
 * The combinations of numbers should be printed in ascending order.
 * 00 01 and 01 00 are considered as the same combination of the numbers 0 and 1.
 * You can only use the putchar function (every other function is forbidden).
 * You can only use putchar eight times maximum in your code.
 * You are not allowed to use any variable of type char.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d1, d2, d3, d4;

	for (d1 = 0; d1 < 10; d1++)
	{
		for (d2 = 0; d2 < 10; d2++)
		{
			for (d3 = d1; d3 < 10; d3++)
			{
				for (d4 = (d3 == d1) ? d2 + 1 : 0; d4 < 10; d4++)
				{
					putchar(d1 + '0');
					putchar(d2 + '0');
					putchar(' ');
					putchar(d3 + '0');
					putchar(d4 + '0');

					if (d1 == 9 && d2 == 8 && d3 == 9 && d4 == 9)
						continue;

					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}

