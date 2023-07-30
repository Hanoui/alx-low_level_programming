#include <stdio.h>

void print_hello(void) __attribute__ ((constructor));

/**
 * print_hello - Function to print "Hello, Holberton" before main
 */
void print_hello(void)
{
	printf("Hello, Holberton\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	return (0);
}

