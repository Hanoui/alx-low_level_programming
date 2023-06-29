#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string to append to.
 * @src: The source string to append.
 *
 * Return: Pointer to the resulting string `dest`.
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i = 0;

	/* Calculate the length of `dest` */
	while (dest[dest_len] != '\0')
		dest_len++;

	/* Append the characters of `src` to `dest` */
	while (src[i] != '\0')
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}

	/* Add the null-terminating byte at the end */
	dest[dest_len] = '\0';

	return (dest);
}
