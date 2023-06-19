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
	int num1, num2, num3, num4;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 0; num2 < 10; num2++)
		{
			for (num3 = num1; num3 < 10; num3++)
			{
				for (num4 = (num3 == num1) ? num2 + 1 : 0; num4 < 10; num4++)
				{
					putchar((num1 % 10) + '0');
					putchar((num2 % 10) + '0');
					putchar(' ');
					putchar((num3 % 10) + '0');
					putchar((num4 % 10) + '0');

					if (num1 == 9 && num2 == 8 && num3 == 9 && num4 == 9)
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

