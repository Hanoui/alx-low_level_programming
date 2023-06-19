#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two-digit numbers
 * The numbers should range from 0 to 99
 * The two numbers should be separated by a space
 * All numbers are printed with two digits (1 printed as 01)
 * The combination of numbers is separated by a comma, followed by a space
 * The combinations of numbers should be printed in ascending order
 * 00 01 and 01 00 are considered as the same combination of  0 and 1
 * You can only use the putchar function (every other function is forbidden)
 * You can only use putchar eight times maximum in your code
 * You are not allowed to use any variable of type char
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n1, n2, n3, n4;

	for (n1 = 0; n1 < 10; n1++)
	{
		for (n2 = 0; n2 < 10; n2++)
		{
			for (n3 = n1; n3 < 10; n3++)
			{
				for (n4 = (n3 == n1) ? n2 + 1 : 0; n4 < 10; n4++)
				{
					putchar((n1 % 10) + '0');
					putchar((n2 % 10) + '0');
					putchar(' ');
					putchar((n3 % 10) + '0');
					putchar((n4 % 10) + '0');

					if (n1 == 9 && n2 == 8 && n3 == 9 && n4 == 9)
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
