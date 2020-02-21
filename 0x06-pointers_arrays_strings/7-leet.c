#include "holberton.h"

/**
 *
 * leet - encodes a string
 * @s: string
 * return: string
 */

char *leet(char *c)
{
	char low[] = "aeotl";
	char up[] = "AEOTL";
	char rep[] = "43071";
	int x, m;

	for (x = 0; c[x] != '\0'; x++)
	{
		for (m = 0; low[m] != '\0'; m++)
		{
			if (c[x] == low[m] || c[x] == up[m])
			{
				c[x] = rep[m];
			}
		}
	}
	return (c);
}
