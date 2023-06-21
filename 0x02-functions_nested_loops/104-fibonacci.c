#include "main.h"

/**
 * print_fibonacci - Prints the Fibonacci sequence up to a given number
 *
 * @n: The number of Fibonacci numbers to print
 */
void print_fibonacci(int n)
{
    int a = 1, b = 2, i, next;

    _putchar('1');
    _putchar(',');
    _putchar(' ');
    _putchar('2');

    for (i = 3; i <= n; i++)
    {
        next = a + b;
        _putchar(',');
        _putchar(' ');
        _putchar(next + '0');
        a = b;
        b = next;
    }

    _putchar('\n');
}

/**
 * main - Entry point of the program
 *
 * Return: 0 (Success)
 */
int main(void)
{
    print_fibonacci(98);

    return 0;
}
