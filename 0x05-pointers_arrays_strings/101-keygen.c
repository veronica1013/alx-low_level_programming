#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point generates a random password
 *
 * Return: 0 on success
 */
int main(void)
{
    char c;
    int x = 0;

    srand(time(0));

    while (x <= 2645)
    {
        c = rand() % 128;
        if ((x + c) <= 2772) // Ensure the sum does not exceed 2772
        {
            x += c;
            putchar(c);
        }
    }

    putchar(2772 - x);
    return (0);
}

