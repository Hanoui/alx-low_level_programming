#include "main.h"

/**
 * _puts - Prints a string followed by a new line to the standard output
 * @s: The string to be printed
 */
void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
}
