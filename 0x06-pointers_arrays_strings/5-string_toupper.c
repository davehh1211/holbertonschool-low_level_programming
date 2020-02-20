#include "holberton.h"

/**
 * string_toupper - writes the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *string_toupper(char *s)
{
	int x = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] > 97 && s[x] < 122)
		{
			s[x] = (s[x] - 32);
		}
	}
	return (s);
}
