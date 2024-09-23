#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;

    while (*s && strchr(accept, *s++))
        count++;
    return (count);
}

