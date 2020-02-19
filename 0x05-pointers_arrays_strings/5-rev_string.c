#include "holberton.h"

/**
 * rev_string - writes the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void rev_string(char *s)
{
	int x, y, z = 0;
	char t[1000];

	for (x = 0; s[x] != '\0'; x++)
	{
		t[x] = s[x];
	}
	for (y = x - 1; y >= 0; y--)
	{
		s[y] = t[z];
		z++;
	}
}
