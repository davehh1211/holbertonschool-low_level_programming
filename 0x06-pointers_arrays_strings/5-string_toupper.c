#include "holberton.h"

/**
 * string_toupper - writes the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * 
 */
char *string_toupper(char *s)
{
	int x;

	for (x = 0; s[x]; x++)
	{
		if ((s[x] > 97) && (s[x] < 122))
		{
			s[x] = (s[x] - 32);
		}
	}
	return (s);
}
