#include "holberton.h"

/**
 *
 * Rot13 - decode in rot13
 * @s: the character to return
 * Return - return the character
 *
 */
char *rot13(char *s)
{
	int x, j = 0;

	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[x] == a[j])
			{
				s[x] = b[j];
				break;
			}
		}
	}
	return (s);
}
