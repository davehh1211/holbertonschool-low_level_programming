#include "holberton.h"

/**
 * _strspn - Write a function that gets the length of a prefix substring
 * @s: the char to compare
 * @accept: the char to compare the matches
 *
 * Return: character to return
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, n = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				n++;
				break;
			}
		}
	}
	return (n + 1);
}
