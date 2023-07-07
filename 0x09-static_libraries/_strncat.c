#include "main.h"

/**
 * _strncat - Concatenates n characters from src to dest
 * @dest: The destination string
 * @src: The source string
 * @n: The number of characters to concatenate
 *
 * Return: Pointer to the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
    char *ptr = dest;

    while (*dest != '\0')
    {
        dest++;
    }

    while (*src != '\0' && n > 0)
    {
        *dest = *src;
        dest++;
        src++;
        n--;
    }

    *dest = '\0';

    return ptr;
}

