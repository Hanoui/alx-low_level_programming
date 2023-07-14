#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _isDigit - Checks if a character is a digit
 * @c: The character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isDigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - Computes the length of a string
 * @s: The string to compute the length of
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	return (len);
}

/**
 * _multiply - Multiplies two numbers represented as strings
 * @num1: The first number
 * @len1: The length of the first number
 * @num2: The second number
 * @len2: The length of the second number
 * @result: The result array to store the product
 */
void _multiply(char *num1, int len1, char *num2, int len2, int *result)
{
	int i, j, carry, size = len1 + len2;

	for (i = 0; i < size; i++)
		result[i] = 0;

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			result[i + j + 1] += ((num1[i] - '0') * (num2[j] - '0')) + carry;
			carry = result[i + j + 1] / 10;
			result[i + j + 1] %= 10;
		}
		result[i] += carry;
	}
}

/**
 * _printResult - Prints the result array
 * @result: The result array to print
 * @size: The size of the result array
 */
void _printResult(int *result, int size)
{
	int i = 0;

	while (i < size && result[i] == 0)
		i++;

	if (i == size)
		_putchar('0');
	else
	{
		while (i < size)
			_putchar(result[i++] + '0');
	}

	_putchar('\n');
}

/**
 * _puts - Writes a string to the standard output (stdout)
 * @str: The string to write
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * main - Multiplies two positive numbers
 * @argc: The argument count
 * @argv: The argument vector
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	char *num1, *num2;
	int len1, len2, size, *result, i;

	if (argc != 3)
	{
		_puts("Error");
		_putchar('\n');
		return (98);
	}

	num1 = argv[1];
	num2 = argv[2];

	len1 = _strlen(num1);
	len2 = _strlen(num2);

	for (i = 0; i < len1 || i < len2; i++)
	{
		if (!_isDigit(num1[i]) || !_isDigit(num2[i]))
		{
			_puts("Error");
			_putchar('\n');
			return (98);
		}
	}

	size = len1 + len2;
	result = malloc(sizeof(int) * size);
	if (result == NULL)
		return (98);

	_multiply(num1, len1, num2, len2, result);
	_printResult(result, size);

	free(result);

	return (0);
}

