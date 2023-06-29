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
        for (i = 0; rot13[i]; i++)
        {
            if (*ptr == rot13[i])
            {
                *ptr = ROT13[i];
                break;
            }
        }

        ptr++;
    }

    return str;
}
