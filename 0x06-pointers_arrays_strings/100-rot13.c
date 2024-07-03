#include "main.h"

/**
 * rot13 - caesers cipher
 * @str: pointer to an array of words
 *
 * Write a function that encodes a string using rot13.
 * Prototype: char *rot13(char *);
 * You can only use if statement once in your code
 * You can only use two loops in your code
 * You are not allowed to use switch
 * You are not allowed to use any ternary operation
 * Return: s
 */

char *rot13(char *str)
{
	int i, j;
	char input[80] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[80] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; ++i)
	{
		for (j = 0; input[j] != '\0'; j++)
		{
			if (str[i] == input[j])
			{
				str[i] = output[j];
				break;
			}
		}

	}
	return (str);
}
