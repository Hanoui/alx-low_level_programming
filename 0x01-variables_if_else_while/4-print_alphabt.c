#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 *        followed by a new line, except q and e
 *
 * Return: Always 0
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'c' && la != 'q')
			putchar(la);
	}

	putchar('\n');

	return (0);
}

