#include <stdio.h>

void _start_asm(void);  // Correct the function name to match the assembly code

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    _start_asm();  // Call the assembly function with the correct name
    return (0);
}

