#include <stddef.h>

char *_strchr(char *s, char c)
{
    while (*s)
    {
        if (*s == c)
            return s;
        s++;
    }

    if (*s == c)
        return s;

    return NULL;
}

