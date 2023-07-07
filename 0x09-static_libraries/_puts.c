#include "main.h"
#include <unistd.h>

/**
 * _puts - Print a string
 * @s: The string to print
 */
void _puts(char *s)
{
    int i = 0;

    while (s[i] != '\0')
    {
        _putchar(s[i]);
        i++;
    }
}
