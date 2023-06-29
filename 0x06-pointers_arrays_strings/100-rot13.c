#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @s: The string to encode.
 *
 * Return: Pointer to the encoded string.
 */
char *rot13(char *s)
{
	int i;
	char *ptr = s;
	char *rot13_lower = "abcdefghijklmnopqrstuvwxyz";
	char *rot13_upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot13_result = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*s)
	{
		for (i = 0; i < 26; i++)
		{
			if (*s == rot13_lower[i])
			{
				*s = rot13_result[i];
				break;
			}
			else if (*s == rot13_upper[i])
			{
				*s = rot13_result[i];
				break;
			}
		}
		s++;
	}

	return (ptr);
}
