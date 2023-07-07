#include "main.h"

/**
 * _putchar - Prints a single character to the standard output
 * @c: The character to be printed
 *
 * Return: On success, returns the character printed.
 * On error, returns -1 and sets errno appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
