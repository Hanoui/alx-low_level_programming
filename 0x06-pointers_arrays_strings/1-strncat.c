#include "main.h"

/**
 * _strncat - Concatenates two strings up to n bytes.
 * @dest: The destination string to append to.
 * @src: The source string to append.
 * @n: The maximum number of bytes to append from src.
 *
 * Return: Pointer to the resulting string `dest`.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	/* Calculate the length of `dest` */
	while (dest[dest_len] != '\0')
		dest_len++;

	/* Append the characters of `src` up to `n` bytes */
	while (src[i] != '\0' && i < n)
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}

	/* Add the null-terminating byte at the end */
	dest[dest_len] = '\0';

	return (dest);
}

