#include "main.h"
#include <stdio.h>

void _puts(char *s)
{
    while (*s)
        putchar(*s++);
    putchar('\n');
}

