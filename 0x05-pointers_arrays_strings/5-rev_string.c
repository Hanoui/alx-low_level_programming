#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string.
 */
void rev_string(char *s)
{
	int i, j;
	char temp;

	for (i = 0, j = 0; s[j] != '\0'; j++)
		;

	j--;

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
