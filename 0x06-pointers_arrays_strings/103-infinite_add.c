#include "main.h"

/**
 * infinite_add - Adds two numbers
 * @n1: First number as a string
 * @n2: Second number as a string
 * @r: Buffer to store the result
 * @size_r: Size of the buffer
 *
 * Return: Pointer to the result string, or 0 if the result can't be stored
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0, sum = 0;
	int i, j;

	/* Calculate the lengths of the input strings */
	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;

	/* Check if the result can be stored in r */
	if (size_r <= len1 || size_r <= len2)
		return 0;

	/* Add the digits from right to left */
	for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry; i--, j--)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';

		carry = sum / 10;
		sum %= 10;

		r[size_r - 1] = sum + '0';
		size_r--;
	}

	/* If there is still a carry, shift the result to the right */
	if (carry)
	{
		for (i = size_r - 1; i >= 0; i--)
			r[i + 1] = r[i];
		r[0] = carry + '0';
	}

	return &r[size_r];
}
