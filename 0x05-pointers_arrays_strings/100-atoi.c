#include "holberton.h"

/**
 * _atoi - writes the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _atoi(char *s)
{
	int a;
	unsigned int c, g, j, sign;

	c = 0;
	g = 0;
	sign = 0;

	for (c = 0; src[c] < '0' || s[c] > '9'; c++)
	{
		if (s [c] == '-')
			sign++;
	}
	for (j = c; s[j] >= '0' && s[j] <= '9'; j++)
	{
		g = (g * 10) + (s[j] - '0');
	}
	if (sign % 2 == 0)
	{
		a = g * (-1);
		return (a);
	}
	else
	{
		return (g);
	}
}
