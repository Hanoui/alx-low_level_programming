#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - Prints the content of a buffer
 * @b: Buffer to print
 * @size: Size of the buffer
 */
void print_buffer(char *b, int size)
{
	int i, j;
	unsigned char *p = (unsigned char *)b;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
				printf("%02x", p[i + j]);
			else
				printf("  ");

			if (j % 2 != 0)
				printf(" ");
		}

		for (j = 0; j < 10; j++)
		{
			if (i + j >= size)
				break;

			if (isprint(p[i + j]))
				printf("%c", p[i + j]);
			else
				printf(".");
		}

		printf("\n");
	}
}
