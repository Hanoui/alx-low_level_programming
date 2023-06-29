#include "rot13.h"

/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
    char *ptr = str;
    int i;

    char rot13[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char ROT13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

    while (*ptr)
    {
        i = 0;
        while (rot13[i])
        {
            if (*ptr == rot13[i])
            {
                *ptr = ROT13[i];
                break;
            }
            i++;
        }

        ptr++;
    }

    return str;
}
