#include "main.h"
#include <stddef.h>  // Include for NULL
char *_strstr(char *haystack, char *needle)
{
    char *h = haystack, *n = needle;

    if (!*needle)
        return (haystack);
    while (*h)
    {
        n = needle;
        h = haystack;
        while (*n && *h == *n)
        {
            h++;
            n++;
        }
        if (!*n)
            return (haystack);
        haystack++;
    }
    return (NULL);
}

