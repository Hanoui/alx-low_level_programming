#include "main.h"

/**
 * _strncpy - Copies a string up to n bytes.
 * @dest: The destination string to copy to.
 * @src: The source string to copy from.
 * @n: The maximum number of bytes to copy.
 *
 * Return: Pointer to the resulting string `dest`.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Copy the characters from `src` up to `n` bytes or until null-terminator */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	/* Append null bytes to `dest` if `n` is greater than the length of `src` */
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
