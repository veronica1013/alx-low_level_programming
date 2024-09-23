#include "main.h"
#include <string.h>  // Include for strchr
#include <stddef.h>  // Include for NULL
char *_strpbrk(char *s, char *accept)
{
    while (*s)
    {
        if (strchr(accept, *s))
            return (s);
        s++;
    }
    return (NULL);
}

