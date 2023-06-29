#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The string to be encoded.
 *
 * Return: Pointer to the encoded string.
 */
char *leet(char *str)
{
	int i, j;
	char letters[] = "AEOTL";
	char leet[] = "43071";

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (letters[j] != '\0')
		{
			if (str[i] == letters[j] || str[i] == letters[j] + 32)
				str[i] = leet[j];
			j++;
		}
		i++;
	}

	return (str);
}
