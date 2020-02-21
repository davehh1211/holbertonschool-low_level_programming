#include "holberton.h"

/**
 * leet - encodes a string
 * @s: string
 * Return: string
 */

char *leet(char *s)
{
	char low[] = "aeotl";
	char up[] = "AEOTL";
	char rep[] = "43071";
	int x, m;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (m = 0; low[m] != '\0'; m++)
		{
			if (s[x] == low[m] || s[x] == up[m])
			{
				s[x] = rep[m];
			}
		}
	}
	return (s);
}
