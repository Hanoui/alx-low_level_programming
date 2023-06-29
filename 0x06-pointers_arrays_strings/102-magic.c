#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int a[5] = {98, 402, 1024, 2048, 4096};
	int *p = &a[2];

	*(p + 1) = 98; /* Add this line */

	return (0);
}
