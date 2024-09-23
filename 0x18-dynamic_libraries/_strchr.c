#include "main.h"
#include <stddef.h>  // Include for NULL
char *_strchr(char *s, char c)
{
    while (*s)
    {
        if (*s == c)
            return (s);
        s++;
    }
    return (c == '\0' ? s : NULL);
}

